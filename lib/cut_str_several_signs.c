/*
** EPITECH PROJECT, 2019
** calc_several_args.c
** File description:
** take a string with multiple operators
** calcul them by priority and return the res.
*/

#include "my.h"
#include <stdlib.h>

char *cut_str_several_signs(char *calc_part)
{
    int i = 0;
    char *res = malloc(sizeof(char) * my_strlen(calc_part));

    if (nbr_of_sign(calc_part) != 1)
        return (calc_part);
    while (calc_part[i] != '\0') {
        if (find_priori_sign(calc_part[i]) == 1) {
            res = find_concerned_chars(calc_part, i);
            calc_part = res;
            i = 0;
        }
        if (find_regular_sign(calc_part[i]) == 1) {
            res = find_concerned_chars(calc_part, i);
            calc_part = res;
            i = 0;
        }
        i++;
    }
    return (res);
}
