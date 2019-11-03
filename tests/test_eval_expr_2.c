/*
** EPITECH PROJECT, 2019
** eval_expr_test_2.c
** File description:
** Will test the return of several expression
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "my.h"

Test(eval_expr, simple_addition)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3+3"};
    unsigned int size;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "6");
}

Test(eval_expr, simple_addition_w_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3+(3+3)"};
    unsigned int size = 7;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "9");
}

Test(eval_expr, simple_mul)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3*3"};
    unsigned int size = 3;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "9");
}

Test(eval_expr, simple_mul_w_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3+(3*3)"};
    unsigned int size = 7;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "12");
}

Test(eval_expr, expr_starting_w_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"(3*3)"};
    unsigned int size = 5;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "9");
}

Test(eval_expr, expr_ending_w_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3+(3*3)"};
    unsigned int size = 7;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "12");
}

Test(eval_expr, simple_exp_w_nested_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3+(3+(3*3))"};
    unsigned int size = 11;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "15");
}

Test(eval_expr, hard_exp_w_nested_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3*(3+(2*1))"};
    unsigned int size = 11;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "15");
}

Test(eval_expr, complex_exp_w_nested_brackets)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3*(3*3+(2*1))"};
    unsigned int size = 13;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "33");
}

Test(eval_expr, brackets_with_several_args_w_no_priority)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3*(1+1+1)"};
    unsigned int size = 9;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "9");
}

Test(eval_expr, brackets_with_several_args_w_priority)
{
    char const *base = "0123456789";
    char const *ops ="()+-*/%";
    char const str[] = {"3*(1+1*1)"};
    unsigned int size = 9;
    char *res = eval_expr(base, ops, str, size);

    cr_assert_str_eq(res, "6");
}
