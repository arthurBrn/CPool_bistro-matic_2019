/*
** EPITECH PROJECT, 2019
** cut_expression.c
** File description:
** receive an expression as parameters, cut the chars before and after the sign
*/

#include "my.h"
#include <stdlib.h>

char *cut_str_one_sign(char *calc_part)
{
    int i = 0;
    int bf_sign = 0;
    int af_sign = 0;
    int str_index = 0;
    int sign_index = 0;
    char *bef_sign = malloc(sizeof(char) * my_strlen(calc_part));
    char *aft_sign = malloc(sizeof(char) * my_strlen(calc_part));

    while (my_char_num(calc_part[i]) == 1) {
        bef_sign[i] = calc_part[i];
        i++;
    }
    bf_sign = my_atoi(bef_sign);
    sign_index = i;
    i++;
    while (my_char_num(calc_part[i]) == 1) {
        aft_sign[str_index] = calc_part[i];
        str_index++;
        i++;
    }
    af_sign = my_atoi(aft_sign);
    return (my_do_op(calc_part, sign_index, bf_sign, af_sign));
}
