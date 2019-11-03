/*
** EPITECH PROJECT, 2019
** concat_expr.c
** File description:
** Concatene a given string from its original string
*/

#include "my.h"

char *concat_expr(char const *str, char *calc_part, int start, int end)
{
    int count = 0;

    while (start != end + 1) {
        calc_part[count] = str[start];
        count++;
        start++;
    }

    return (calc_part);
}
