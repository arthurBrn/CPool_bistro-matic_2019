/*
** EPITECH PROJECT, 2019
** test_eval_expr_return_res
** File description:
** Test function return res of evalexpr
*/

#include "my.h"
#include <criterion/criterion.h>
#include <stdlib.h>
char *return_res(char *part_to_calc);

Test(return_res, simple_addition_below_tens)
{
    char r[] = {"3+3"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "6");
}

Test(return_res, simple_addition_tens)
{
    char r[] = {"30+30"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "60");
}

Test(return_res, simple_addition_hundreds)
{
    char r[] = {"100+500"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "600");
}

Test(return_res, addition_hundreds_becoming_thousands)
{
    char r[] = {"600+500"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "1100");
}

Test(return_res, simple_addition_thounsands)
{
    char r[] = {"1000+5000"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "6000");
}

Test(return_res, addition_thounsands_becoming_millions)
{
    char r[] = {"500000+600000"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "1100000");
}


Test(return_res, simple_mul_below_tens)
{
    char r[] = {"3*3"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "9");
}

Test(return_res, simple_mul_tens)
{
    char r[] = {"15*15"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "225");
}

Test(return_res, simple_mul_hundreds)
{
    char r[] = {"100*100"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "10000");
}

Test(return_res, simple_addition_of_multiple_digits)
{
    char r[] = {"1+1+1"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "3");
}

Test(return_res, simple_mul_of_multiple_digits)
{
    char r[] = {"1*1*1"};
    char *res = return_res(r);

    cr_assert_str_eq(res, "1");
}
