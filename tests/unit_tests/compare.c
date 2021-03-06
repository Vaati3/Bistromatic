/*
** EPITECH PROJECT, 2018
** compare
** File description:
** compare
*/

#include "ut_utils.h"
#include "unittest.h"
#include <stdio.h>

int ut_assert_str_eq(char *a, char *b)
{
    for (int i = 0; a[i] || b[i]; i++)
    {
        if (a[i] != b[i]) {
            fail++;
            comp_err(a, b);
            return (0);
        }
    }
    success++;
    return (0);
}

int ut_assert(int cmp)
{
    if (cmp) {
        success++;
    } else {
        fail++;
        mwrite("[\x1B[34m----\x1B[0m] ");
        mwrite(running->name);
        mwrite(": Assertion failed");
        mwrite("\n");
    }
    return (0);
}
