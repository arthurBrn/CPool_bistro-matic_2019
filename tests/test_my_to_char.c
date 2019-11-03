/*
** EPITECH PROJECT, 2019
** test_my_to_char.c
** File description:
** test function lib/my_to_char.c
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "my.h"

Test(my_to_char, dixaine)
{
    int expression = 10;
    int size = 3;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "10");
}

Test(my_to_char, dixaine_that_is_not_ten)
{
    int expression = 30;
    int size = 3;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "30");
}

Test(my_to_char, centaine)
{
    int expression = 100;
    int size = 5;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "100");
}

Test(my_to_char, millieme)
{
    int expression = 1000;
    int size = 9;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "1000");
}

Test(my_to_char, ten_million)
{
    int expression = 10000000;
    int size = 16;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "10000000");
}

Test(my_to_char, one_billion)
{
    int expression = 1000000000;
    int size = 16;
    char *str = my_to_char(expression, size);

    cr_assert_str_eq(str, "1000000000");
}

