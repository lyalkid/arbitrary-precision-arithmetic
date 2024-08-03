#include "test.h"

#include <stdlib.h>

#include "../inc/s21_decimal.h"



// int main(void) {
//     int number_failed;
//     SRunner *sr;
//
//     sr = srunner_create(NULL);
//     srunner_add_suite(sr, s21_add_suite5());
//     srunner_add_suite(sr, s21_add_suite10());
//     srunner_add_suite(sr,  s21_add_cases30());
//     srunner_add_suite(sr,  s21_add_cases50());
//     srunner_add_suite(sr,  s21_add_cases100());
//     srunner_add_suite(sr,  s21_add_cases300());
//     srunner_add_suite(sr,  s21_add_cases500());
//
//
//
//     //                       s21_add_suite5(),
//     //         s21_add_suite10(),
//     //         s21_add_cases30(),
//     //         s21_add_cases50(),
//     //         s21_add_cases100(),
//     //         s21_add_cases300(),
//
//
//     srunner_set_fork_status(sr, CK_NOFORK);
//     // Используем данный блок для вывода подробно про каждый тест с разбиением по
//     // блокам srunner_set_log(sr, "-"); srunner_run_all(sr, CK_SILENT);  //
//     // CK_SILENT || CK_MINIMAL || CK_NORMAL || CK_VERBOSE Либо данный блок вместо
//     // предыдущего для вывода только ошибок и общего результата
//     srunner_run_all(sr, CK_NORMAL);
//
//     number_failed = srunner_ntests_failed(sr);
//     srunner_free(sr);
//     return (number_failed == 0) ? EXIT_SUCCESS : EXIT_SUCCESS;
// }


int main() {
    srand(time(NULL));
    int all = 0, successed = 0, failed = 0;
    Suite *suite[] = {// s21_floor_suite(),
                      //                   s21_negate_suite(),
                      //                   s21_round_suite(),
                      //                   s21_truncate_suite(),
                      //                   s21_dtoi_suite(),
                      //                   s21_dtof_suite(),
                      s21_add_suite5(),
        s21_add_suite10(),
        s21_add_cases30(),
        s21_add_cases50(),
        s21_add_cases100(),
        s21_add_cases300(),
s21_add_cases500(),

                      //                   s21_sub_suite(),
                      //                   s21_shift_left_suite(),
                      //                   s21_normalize_suite(),
                      //                   s21_itod_suite(),
                      //                   s21_ftod_suite(),
                      //                   s21_compare_suite(),
                      //s21_bank_round_suite(),
                      //                   s21_mul_suite(),
                      //                   s21_div_suite(),
                      NULL};

    for (int i = 0; suite[i] != NULL; i++) {
        SRunner *sr = srunner_create(suite[i]);
        srunner_set_fork_status(sr, CK_NOFORK);
        srunner_run_all(sr, CK_NORMAL);
        all += srunner_ntests_run(sr);
        failed += srunner_ntests_failed(sr);
        srunner_free(sr);
    }

    successed = all - failed;

    printf(
        "========= ALL: %d ========= SUCCESSED: %d ========= FAILED: %d "
        "=========\n%.2f percents\n",
        all, successed, failed, ((float)successed/all) * 100);
    return failed == 0 ? 0 : 1;
}
