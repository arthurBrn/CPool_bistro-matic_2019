/*
** EPITECH PROJECT, 2019
** test_nbr_of_sign.c
** File description:
** test nbr_of_sign
*/

#include "my.h"
#include <criterion/criterion.h>
#include <stdlib.h>

int nbr_of_sign(char *str);

Test(nbr_of_sign, string_null)
{
    char part_calc[] = {""};
    int res = nbr_of_sign(part_calc);

    cr_assert_eq(res, 84);
}

Test(nbr_of_sign, string_w_no_signs)
{
    char part_calc[] = {"123456789"};
    int res = nbr_of_sign(part_calc);

    cr_assert_eq(res, 0);
}

Test(nbr_of_sign, string_w_one_sign)
{
    char part_calc[] = {"1234+56789"};
    int res = nbr_of_sign(part_calc);

    cr_assert_eq(res, 1);
}

Test(nbr_of_sign, string_w_multiple_signs)
{
    char part_calc[] = {"12+34+56+789"};
    int res = nbr_of_sign(part_calc);

    cr_assert_eq(res, 3);
}
