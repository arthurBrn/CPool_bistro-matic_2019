/*
** EPITECH PROJECT, 2019
** test_parenthesis.c
** File description:
** Test all the function of parenthsis file
*/

#include "my.h"
#include <criterion/criterion.h>
#include <stdlib.h>

int find_end_par(char const *str);
int find_open_par(char const *str, int i);

Test(find_end_par, str_w_brackets_at_end)
{
    char const *str = "2+(3+3)";
    int res = find_end_par(str);

    cr_assert_eq(res, 6);

}

Test(find_end_par, str_w_brackets_at_beginning)
{
    char const *str = "(3+3)";
    int res = find_end_par(str);

    cr_assert_eq(res, 4);

}

Test(find_end_par, str_w_brackets_in_middle)
{
    char const *str = "2+(3+3)+2";
    int res = find_end_par(str);

    cr_assert_eq(res, 6);
}

Test(find_end_par, str_w_no_brackets)
{
    char const *str = "2+3+3";
    int res = find_end_par(str);

    cr_assert_eq(res, -1);
}

Test(find_open_par, str_w_brackets_at_end_open)
{
    char const *str = "2+(3+3)";
    int i = 6;
    int res = find_open_par(str, i);

    cr_assert_eq(res, 2);

}

Test(find_open_par, str_w_brackets_at_beginning_open)
{
    char const *str = "(3+3)";
    int i = 4;
    int res = find_open_par(str, i);

    cr_assert_eq(res, 0, "got %d expected %d", res, 0);
}

Test(find_open_par, str_w_brackets_in_middle_open)
{
    char const *str = "2+(3+3)+2";
    int i = 6;
    int res = find_open_par(str, i);

    cr_assert_eq(res, 2);
}

Test(find_open_par, str_w_no_brackets_open)
{
    char const *str = "2+3+3";
    int i = -1;
    int res = find_open_par(str, i);

    cr_assert_eq(res, -1);
}


