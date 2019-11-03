/*
** EPITECH PROJECT, 2019
** test function lib/calc_several_args
** File description:
** test_cut_str_several_signs
*/

#include <criterion/criterion.h>
#include "my.h"
#include <stdlib.h>

Test(cut_str_several_signs, simple_addition)
{
    char str[] = {"1+1+1"};
    char *res = cut_str_several_signs(str);

    cr_assert_str_eq(res, "3");
}

Test(cut_str_several_signs, simple_mul)
{
    char str[] = {"1*1*1"};
    char *res = cut_str_several_signs(str);

    cr_assert_str_eq(res, "1");
}

Test(cut_str_several_signs, not_simple_mul_w_priority)
{
    char str[] = {"10*50+5*15"};
    char *res = cut_str_several_signs(str);

    cr_assert_str_eq(res, "575");
}


