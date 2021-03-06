/*
** EPITECH PROJECT, 2018
** test_func_header
** File description:
** test_func_header
*/

#ifndef TEST_FUNC_H
#define TEST_FUNC_H
#include "all.h"

base_t *init_base(char *base_v);
all_t *init_all(char *expr, base_t *base, int *exitcode);

void test_add(void);
void test_sub(void);
void test_sub2(void);
void test_called_add(void);
void test_add_big(void);
void test_called_add_big(void);
void test_get_num(void);
void test_string_to_number(void);
void test_free_number(void);
void test_clear_zero(void);
void test_create_number(void);
void test_readc(void);
void test_move(void);
void test_skip_whitespace(void);
void test_base_to_int(void);
void test_int_to_base(void);
void test_mul_add(void);
void test_mulnums_big(void);
void test_mulnums(void);
void test_karatsuba_mul(void);
void test_eval_expr1(void);
void test_eval_expr2(void);
void test_mul(void);
void test_eval_expr4(void);

#endif // TEST_FUNC_H
