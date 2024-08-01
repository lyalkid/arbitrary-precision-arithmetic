CFLAGS = -c #-Wall -Werror -Wextra -std=c11
LDFLAGS =  -std=c11 #-Wall -Werror -Wextra
SOURCE = $(wildcard */*.c *.c)
SOURCE1 = $(wildcard *.c)

OBJECTS = $(patsubst %.c,%.o, $(SOURCE1))
TESTS_SOURCE = a_tests/arithmetic_test/5x_test_s21_add.c a_tests/*.c
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
  	OPEN_CMD = xdg-open
	ADD_LIB = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif
ifeq ($(UNAME_S),Darwin)
	OPEN_CMD = open
	ADD_LIB =
endif



all: s21_decimal.a

s21_decimal.a: ${SOURCE}
	@gcc $(CFLAGS) $(ADD_LIB) $(SOURCE)
	@ar rcs s21_decimal.a arithmetic_helpers.o s21_add.o s21_banking_round.o s21_decimal_utils.o s21_normalize_scale.o
	@ranlib s21_decimal.a
	@-rm -rf *.o

test: s21_decimal.a
	@gcc $(LDFLAGS) -o test $(TESTS_SOURCE) s21_decimal.a $(ADD_LIB) -lcheck
	@./test


clean_lib:
	rm -rf s21_decimal.a

clean:clean_lib clean_test
	rm -rf *.o
	#clear
clean_test:
	rm -rf test