/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** my_strncmp
*/

#include <stdio.h>
#include <unistd.h>
#include "all.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            return (0);
    return (1);
}

void print_number(number_t *a, base_t *base)
{
    if (a->neg && !equal_zero(a, base))
        write(1, "-", 1);
    write(1, a->str, a->len - 1);
}

char *create_char(int size, base_t *base)
{
    char *data = malloc(sizeof(char) * size);

    for (int i = 0; i < size - 1; i++)
        data[i] = int_to_base(0, base);
    data[size - 1] = '\0';
    return (data);
}

void *free_number2(number_t *a, number_t *b)
{
    free_number(a);
    free_number(b);
    return (0);
}
