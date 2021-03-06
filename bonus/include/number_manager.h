/*
** EPITECH PROJECT, 2018
** number_header
** File description:
** number_header
*/

#ifndef NUMBER_MANAGER_H
#define NUMBER_MANAGER_H

#include "base.h"

typedef struct number_s
{
    char *str;
    char *origin;
    int len;
    int free;
    int neg;
} number_t;

#include "operator.h"

number_t *create_number(char *, int, int, int);
number_t *clear_zero(number_t *, base_t *);
number_t *string_to_number(char **, base_t *, all_t *, operator_t **);
void *free_number(number_t *);
int get_num(number_t *, int, base_t *);
number_t *copy_number(number_t *);

#endif /* NUMBER_MANAGER_H */
