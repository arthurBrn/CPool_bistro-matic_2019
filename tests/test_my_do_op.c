/*
** EPITECH PROJECT, 2019
** test_my_do_op.c
** File description:
** Test the function lib/my_do_op.c
*/

#include <criterion/criterion.h>
#include "my.h"
#include <stdlib.h>

Test(my_do_op, test_addition_bellow_tens)
{
    char part_calc[] = {"5+5"};
    int sign = 1;
    int bf_sign = 5;
    int af_sign = 5;
    char *res = my_do_op(part_calc,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "10");
}

Test(my_do_op, test_addition_tens)
{
    char part_calc[] = {"20+50"};
    int sign = 2;
    int bf_sign = 20;
    int af_sign = 50;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "70");
}

Test(my_do_op, test_addition_tens_depassing_two_digits)
{
    char part_calc[] = {"50+60"};
    char sign = 2;
    int bf_sign = 50;
    int af_sign = 60;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "110");
}

Test(my_do_op, test_addition_hundreds)
{
    char part_calc[] = {"100+100"};
    char sign = 3;
    int bf_sign = 100;
    int af_sign = 100;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "200");
}

Test(my_do_op, test_addition_hundreds_depassing_three_digits)
{
    char part_calc[] = {"500+600"};
    char sign = 3;
    int bf_sign = 500;
    int af_sign = 600;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "1100");
}

Test(my_do_op, test_addition_number_diff_digits_of_length)
{
    char part_calc[] = {"500+50"};
    int sign = 3;
    int bf_sign = 500;
    int af_sign = 50;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "550");
}

Test(my_do_op, test_mul_w_one_digit)
{
    char part_calc[] = {"5*6"};
    int sign = 1;
    int bf_sign = 5;
    int af_sign = 6;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "30");
}

Test(my_do_op, test_mul_w_tens)
{
    char part_calc[] = {"10*10"};
    int sign = 2;
    int bf_sign = 10;
    int af_sign = 10;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "100");
}

Test(my_do_op, test_mul_w_hundreds)
{
    char part_calc[] = {"100*100"};
    int sign = 3;
    int bf_sign = 100;
    int af_sign = 100;
    char *res = my_do_op(part_calc ,sign, bf_sign, af_sign);

    cr_assert_str_eq(res, "10000");
}
