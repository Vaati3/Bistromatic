/*
** EPITECH PROJECT, 2018
** CPool_bistro-matic_2018
** File description:
** div.c
*/

#include "all.h"

// number_t *calc_div(number_t *a, number_t *b, base_t *base, number_t *result)
// {
//     char *r = malloc(sizeof(char) * a->len);
//
//     for (int i = 0, j = 0; i < a->len; i++) {
//         if (b->len < 2 && b->str[0] != '0' && a->str[i] > b->str[0]) {
//             r[j] = base_to_int(a->str[i], base) / base_to_int(b->str[0], base);
//             j++;
//         }
//         if (b->len < 2 && b->str[0] != '0' && a->str[i] < b->str[0]) {
//             r[j] = (base_to_int(a->str[i], base)
//                 + base_to_int(a->str[i + 1], base))
//                 / base_to_int(b->str[0], base);
//             j++;
//         }
//         r[j] = int_to_base(r[j], base);
//     }
//     result = string_to_number(&r, base);
//     return (result);
// }
//
// number_t *diiv(number_t *a, number_t *b, base_t *base, all_t *all)
// {
//     number_t *result;
//
//     (void)all;
//     if (a->len < b->len) {
//         return (create_number(result->str, result->len, 0, 2));
//     }
//     if (a->len > b->len)
//         result = calc_div(a, b, base, result);
//     result->neg = a->neg ^ b->neg;
//     return (clear_zero(create_number(result->str, result->len, result->neg, 2), base));
// }