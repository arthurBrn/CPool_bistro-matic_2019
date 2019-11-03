/*
** EPITECH PROJECT, 2019
** test_parenthesis.c
** File description:
** Test all the function of parenthsis file
*/

#include "my.h"
#include <criterion/criterion.h>
#include <stdlib.h>

int search_parenthesis_ending(char const *str);
int search_parenthesis_openning(char const *str, int i);

Test(search_parenthesis_ending, str_w_brackets_at_end)
{
    char const *str = "2+(3+3)";
    int res = search_parenthesis_ending(str);

    cr_assert_eq(res, 6);

}

Test(search_parenthesis_ending, str_w_brackets_at_beginning)
{
    char const *str = "(3+3)";
    int res = search_parenthesis_ending(str);

    cr_assert_eq(res, 4);

}

Test(search_parenthesis_ending, str_w_brackets_in_middle)
{
    char const *str = "2+(3+3)+2";
    int res = search_parenthesis_ending(str);

    cr_assert_eq(res, 6);
}

Test(search_parenthesis_ending, str_w_no_brackets)
{
    char const *str = "2+3+3";
    int res = search_parenthesis_ending(str);

    cr_assert_eq(res, -1);
}

Test(search_parenthesis_openning, str_w_brackets_at_end_open)
{
    char const *str = "2+(3+3)";
    int i = 6;
    int res = search_parenthesis_openning(str, i);

    cr_assert_eq(res, 2);

}

Test(search_parenthesis_ending, str_w_brackets_at_beginning_open)
{
    char const *str = "(3+3)";
    int i = 4;
    int res = search_parenthesis_openning(str, i);

    cr_assert_eq(res, 0, "got %d expected %d", res, 0);
}

Test(search_parenthesis_ending, str_w_brackets_in_middle_open)
{
    char const *str = "2+(3+3)+2";
    int i = 6;
    int res = search_parenthesis_openning(str, i);

    cr_assert_eq(res, 2);
}

Test(search_parenthesis_openning, str_w_no_brackets_open)
{
    char const *str = "2+3+3";
    int i = -1;
    int res = search_parenthesis_openning(str, i);

    cr_assert_eq(res, -1);
}


