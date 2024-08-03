CC=gcc
CFLAGS=-c #-Wall -Wextra -Werror -std=c11
LDFLAGS =-Wall -Werror -Wextra -std=c11
OUT=a.out
ENTRY= other_funcs/*.c s21_arithmetic/*.c
SOURCE = $(wildcard */*.c )
ARITHMETIC_TEST = a_tests/arithmetic_test/*.c
BANK = a_tests/bank/test_bank.c
TESTS_SOURCE = a_tests/test.c

ifeq ($(shell uname),Darwin)
SHELL:=/bin/zsh
CHECK_FLAGS=-lcheck
else
MAKEFLAGS+=--no-print-directory
CHECK_FLAGS=-lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif




all: s21_decimal.a

s21_decimal.a: ${SOURCE}
	@gcc $(CFLAGS) $(CHECK_FLAGS) $(SOURCE)
	@ar rcs s21_decimal.a arithmetic_helpers.o s21_add.o  s21_subfuncs.o s21_normalize_scale.o
	@ranlib s21_decimal.a


test: s21_decimal.a
	gcc $(LDFLAGS) -o s21_test $(TESTS_SOURCE) $(ARITHMETIC_TEST) $(BANK) s21_decimal.a $(CHECK_FLAGS)
	@./s21_test


clean_lib:
	rm -rf s21_decimal.a

clean_gcov: clean_lib
	rm -rf *.gcno *.gcda s21_test s21_test.info
	rm -rf report



clean: clean_lib clean_test
	rm -rf *.o
clean_test:
	rm -rf s21_test

gcov_report:s21_decimal.a
	@gcc --coverage ${ENTRY} ${TESTS_SOURCE} ${ARITHMETIC_TEST} ${BANK} -o s21_test $(CHECK_FLAGS) -lcheck
	./s21_test
	@lcov -t "s21_test" -o s21_test.info -c -d .
	@genhtml -o report s21_test.info
	open ./report/index.html

style:
	clang-format -i *.c */*.c */*/*.c  */*.h

style-test:
	clang-format -n *.c */*.c  */*.h