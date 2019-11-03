/*
** EPITECH PROJECT, 2019
** test_cut_str_one_sign.c
** File description:
** return the calcul of an expression with only one sign in string format
*/

#include <criterion/criterion.h>
#include "my.h"
#include <stdlib.h>

Test(cut_str_one_sign, simple_addition)
{
    char calc_part[] = {"5+10"};
    char *res = cut_str_one_sign(calc_part);

    cr_assert_str_eq(res, "15");
}

Test(cut_str_one_sign, simple_mul)
{
    char calc_part[] = {"5*5"};
    char *res = cut_str_one_sign(calc_part);

    cr_assert_str_eq(res, "25");
}

Test(cut_str_one_sign, complexe_mul)
{
    char calc_part[] = {"523*645"};
    char *res = cut_str_one_sign(calc_part);

    cr_assert_str_eq(res, "337335");
}
