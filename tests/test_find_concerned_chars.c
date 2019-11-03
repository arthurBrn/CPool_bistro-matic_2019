/*
** EPITECH PROJECT, 2019
** test_find_concerned_chars.c
** File description:
** Test function above
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "my.h"

Test(find_concerned_chars, find_simple_expr_with_plus_sign)
{
    char str[] = {"3+3"};
    int index = 1;
    char *res = find_concerned_chars(str, index);

    cr_assert_str_eq(res, "6");
}

Test(find_concerned_chars, find_simple_expr_with_minus_sign)
{
    char str[] = {"3-3"};
    int index = 1;
    char *res = find_concerned_chars(str, index);

    cr_assert_str_eq(res, "0");
}

Test(find_concerned_chars, find_simple_expr_with_div_sign)
{
    char str[] = {"3/3"};
    int index = 1;
    char *res = find_concerned_chars(str, index);

    cr_assert_str_eq(res, "1");
}

Test(find_concerned_chars, find_simple_expr_with_mul_sign)
{
    char str[] = {"3*3"};
    int index = 1;
    char *res = find_concerned_chars(str, index);

    cr_assert_str_eq(res, "9");
}

Test(find_concerned_chars, find_simple_expr_with_modulol_sign)
{
    char str[] = {"3%3"};
    int index = 1;
    char *res = find_concerned_chars(str, index);

    cr_assert_str_eq(res, "0");
}
