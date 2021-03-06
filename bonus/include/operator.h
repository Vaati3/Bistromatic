/*
** EPITECH PROJECT, 2018
** operator
** File description:
** operator
*/

#ifndef OPERATOR_H
#define OPERATOR_H
#include "number_manager.h"

static int const OPLVMAX = 3;
#define OPERAND number_t *(*func)(number_t *, number_t *, base_t *, all_t *)

typedef struct operator {
    char const *op;
    int level;
    int length;
    number_t *(*func)(number_t *, number_t *, base_t *, all_t *);
} operator_t;

operator_t *new_op(char const *, int, int, OPERAND);
operator_t **init_oplist();
number_t *add(number_t *, number_t *, base_t *, all_t *);
number_t *sub(number_t *, number_t *, base_t *, all_t *);
number_t *mul(number_t *, number_t *, base_t *, all_t *);
number_t *karatsuba_mul(number_t *, number_t *, base_t *, all_t *);
number_t *divinf(number_t *, number_t *, base_t *, all_t *);
number_t *modinf(number_t *, number_t *, base_t *, all_t *);
number_t *unm(number_t *, all_t *);
number_t *equal(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *greater_than(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *less_than(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *greater_or_equal(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *less_or_equal(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *and(number_t *a, number_t *b, base_t *base, all_t *all);
number_t *or(number_t *a, number_t *b, base_t *base, all_t *all);


#endif /* OPERATOR_H */
