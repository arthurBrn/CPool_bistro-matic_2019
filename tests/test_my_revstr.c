/*
** EPITECH PROJECT, 2019
** test_my_rev_str.c
** File description:
** Test the function revstr
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "my.h"

Test(my_revstr, rev_tens)
{
    char str[] = {"01"};
    char *res = my_revstr(str);

    cr_assert_str_eq(res, "10");
}

Test(my_revstr, rev_hundreds)
{
    char str[] = {"001"};
    char *res = my_revstr(str);

    cr_assert_str_eq(res, "100");
}

Test(my_revstr, rev_thousands)
{
    char str[] = {"0001"};
    char *res = my_revstr(str);

    cr_assert_str_eq(res, "1000");
}
