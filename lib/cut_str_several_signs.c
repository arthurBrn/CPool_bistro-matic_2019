/*
** EPITECH PROJECT, 2019
** calc_several_args.c
** File description:
** take a string with multiple operators
** calcul them by priority and return the res.
*/

#include "my.h"

char *cut_str_several_signs(char *calc_part)
{
    return (my_to_char(eval_expr(calc_part), my_strlen(calc_part)));
}
