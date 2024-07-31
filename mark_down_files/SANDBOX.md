```c
/*
    максимальные и минимальные значения INT32 и s21_decimal:
    INT_MIN = -2 147 483 648
    INT_MAX = 2 147 483 648

    UNSIGNED INT_MAX = 4 294 967 295

    DEC_MIN = - 79 228 162 514 264 337 593 543 950 335
    DEC_MAX =   79 228 162 514 264 337 593 543 950 335

    s21_decimal max = 2^96

    decimal позволяет хранить до 28 знаков после запятой
*/

/*
    битовое представления числа Decimal

    empty1 биты от 0 до 15
    scale биты от 16 до 23
    empty2 биты от 24 до 30
    sign 31 бит

    x = {1,0}

    bits[0]: xxxxxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx
    bits[1]: xxxxxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx
    bits[2]: xxxxxxxx.xxxxxxxx.xxxxxxxx.xxxxxxxx
    bits[3]: 00000000.00000000.xxxxxxxx.0000000x

    mantissa:
        bits[2]                         bits[1]                         bits[0]
        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

        96 битное число заполняется сначала bits[0] потом bits[1] потом bits[2]

    bits[3]:              scale    sign 
        00000000.00000000.xxxxxxxx.0000000x
        scale показывает в каком месте должны поставить запятую
        sign - информация о знаке
    
*/

/*
    Первый подводный камень или почему нам нужен big_decimal:
    scale - степень числа 10, на которое будет делится мантиса
    scale - после какого числа ставим заяпятую, если считаем справа.

    ex1:
        s21_decimal dec: mantissa = 123456789 AND scale = 4 => decimal = 1234,6789 

    ex2:
        s21_decimal dec1 : mantissa = 2^96 AND scale = 10   2^96 / 10^10 x....x,xxxxxxxxxx
        s21_decimal dec2 : mantissa = 2^96 AND scale = 7    2^96 / 10^7  x....xxxx,xxxxxxx
    ex3:
        s21_decimal dec1 : mantissa = 2^96 AND scale = 8    2^96 / 10^8
        s21_decimal dec2 : mantissa = 2^94 AND scale = 7    2^94 / 10^7
        
        dec1 > dec2? OR dec1 < dec2?

        dec1 - dec2 = ?

        в этом случае мы не имеем право делать арифметические операции потому что у нас разные знаменатели
*/

/*
    ex1:
       dec1) mantissa = 12345 scale = 2
       dec2) mantissa = 12345 scale = 4

        4 - 2 = 2 => dec2.mantissa * 10^2 => dec1 + dec2 = 123,45 + 1,2345 = (1234500 + 12345) / 10^4

*/


/*
    могут найтись два таких числа, у которых мантиссы 2^96, а scale координально отличаются
    dec1 : mantissa = 2^96 AND scale = 0
    dec2 : mantissa = 2^96 AND scale = 28

    при попытке привести к общему знаменателю, произойдет overflow и мы потеряем значения первого децимала
    поэтому чтобы избежать подобных ситуаций, введем вспомогательный тип big_decimal
    все операции будем производить через него


    битовое представление s21_big_decimal:
    Все INT отведены исключительно на мантиссу
    Как правило это будет нормализованная мантисса, домноженная на правильную степень
    X = {0,1}
    bits[0] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[1] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[2] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[3] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[4] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[5] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[6] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    bits[7] = XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

    взяли два числа, привели их типу s21_big_decimal, произвели необходимую операцию, перевили в decimal
*/

/*
    рассмотрим пример сложения двух децималов
    
    scale -  степень 10, на которую требуется разделить мантиссу
    scale - кол-во знаков после запятой

    при равных мантиссах, то число больше, у которго меньше scale

    ex1:
        mantissa1 = 12345 AND scale = 2 => 123,45
        mantissa2 = 12345 AND scale = 3 => 12,345

        123,45 + 12,345 = 135,795 => mantissa result = 135795 AND scale = 3
        
        123450
        +
        012345
    
    Алгоритм работы с big_decimal:

        ex:
            12345 scale_x = 2 => 123,45 => 12345 / 10^2 => 123450 / 10^3
            12345 scale_y = 3 => 12,345 => 12345 / 10^3 

            dec1 = 123450 / 10^3
            dec2 = 12345 / 10^3

            scale_result = 3

            или 

            dec1 = 123450
            dec2 = 012345

            dec_result / 10^3

            scale_result = 3
        
    s21_decimal dec1: mantissa1 = 2^96 - 1 AND scale1 = {0,28} 
    s21_decimal dec2: mantissa2 = 2^96 - 1 AND scale2 = {0,28} 

    1. MAX_SCALE = max({x,y}) // находим максимальный scale
    2. 
        if MAX_SCALE = scale1, scale_2 = max_scale - min_scale, scale_1 = 0 // если dec1 имеет max_scale
        if MAX_SCALE = scale2, scale1 = max_scale - min_scale, scale_2 = 0 // если dec2 имеет max_scale
    3.
        s21_big_decimal big_dec1 : big_mantissa1 = mantissa1 * 10^scale_2
        s21_big_decimal big_dec2 : big_mantissa2 = mantissa2 * 10^scale_1
        
        y/10 ^ 2 = x / 10 => 
        y * 10 = x * 10^2 : 10 ^ 2 =>
        y = x * 10
    4.
         X = (+,-,/,*) // если нужно использовать знак
         big_mantissa1 X big_mantissa2 = big_mantissa_result

    5. 
        SCALE = max(SCALE_X, SCALE_Y)
        big_mantissa_result / (10 ^ SCALE)
    
    6.
        big_dec_result => dec_result


    ex1:
        1) 
            bits[2]                          bits[1]                          bits[0]  
            11111111111111111111111111111111.11111111111111111111111111111111.11111111111111111111111111111111 : 2^96 - 1 (dec1) scale_1 = 5
            11111111111111111111111111111111.11111111111111111111111111111111.11111111111111111111111111111111 : 2^96 - 1 (dec2) scale_2 = 8
        
        2) 
            MAX_SCALE = scale_2 => 
            SCALE_1 = scale_2 - scale_1 - 8 - 5 = 3
            SCALE_2 = 0

        3)

            big_dec_mantissa1 = dec_mantissa1
            big_dec_mantissa2 = dec_mantissa2 * 10^SCALE_X

            bits[3]                          bits[2]                          bits[1]                          bits[0]                            
            XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX : 2^96 - 1 * 10 ^ 3 (dec1)
        операция (+ - / *) 
            00000000000000000000000000000000.11111111111111111111111111111111.11111111111111111111111111111111.11111111111111111111111111111111 : 2^96 - 1 (dec2)
        =
            big_decimal_mantissa_result

        4)
            big_dec_mantissa_result = dec_mantissa;
            scale = 8    
*/



/*
    БАЗА ПО ОПЕРАЦИЯМ 

    s21_decimal_operation(dec1, dec2){
    
        scale1 = s21_get_scale(dec1)
        scale2 = s21_get_scale(dec2)

        sign1 = s21_get_sign(dec1)
        sign2 = s21_get_sign(dec2)

        ...

        s21_decimal_to_big_decimal( dec1,
                                   SCALE_1,
                                   &big_dec1)
        
        s21_decimal_to_big_decimal( dec2,
                                    SCALE_2
                                    &big_dec2)

        ...

        1. -a + b = b - a
        2. |a - b| = |b - a| 

        ...
        s21_big_decimal_operation ( big_dec1,
                                    big_dec2,
                                    &big_dec_result)
        
        s21_big_decimal_to_decimal (big_dec_result,
                                    &dec_result)

        s21_set_sign(&dec_result)
        s21_set_scale(&dec_result)


        finish
        return ...
    }

*/
```