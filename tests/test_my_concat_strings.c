/*
** EPITECH PROJECT, 2019
** test_my_concat_strings
** File description:
** Test concat_strings function
*/

#include <stdlib.h>
#include <my.h>
#include <criterion/criterion.h>

char *conc_str(char const *str, char *calc_part, int start, int end);

Test(conc_str, simple_addition_concatenation)
{
    char str[] = {"3*(3+3)"};
    char calc_part[] = {"3+3"};
    int start = 2;
    int end = 6;
    char *res = conc_str(str, calc_part, start, end);

    cr_assert_str_eq(res, "3*6");
}

Test(conc_str, simple_mul_concatenation)
{
    char str[] = {"3*(3*3)"};
    char calc_part[] = {"3*3"};
    int start = 2;
    int end = 6;
    char *res = conc_str(str, calc_part, start, end);

    cr_assert_str_eq(res, "3*9");
}

Test(conc_str, simple_mul_concat_sourround_by_addition)
{
    char str[] = {"3*(3*3)+5"};
    char calc_part[] = {"3*3"};
    int start = 2;
    int end = 6;
    char *res = conc_str(str, calc_part, start, end);

    cr_assert_str_eq(res, "3*9+5");
}

Test(conc_str, simple_addition_starting_by_brackets)
{
    char str[] = {"(3*3)+5"};
    char calc_part[] = {"3*3"};
    int start = 0;
    int end = 4;
    char *res = conc_str(str, calc_part, start, end);

    cr_assert_str_eq(res, "9+5");
}

Test(conc_str, simple_addition_w_multiple_brackets)
{
    char str[] = {"(3*(1*3))+5"};
    char calc_part[] = {"1*3"};
    int start = 3;
    int end = 7;
    char *res = conc_str(str, calc_part, start, end);

    cr_assert_str_eq(res, "(3*3)+5");
}

