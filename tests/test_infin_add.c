/*
** EPITECH PROJECT, 2019
** test my list size
** File description:
** test of the fonction my_list_size.c
*/

#include "my.h"
#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>

int is_conform(int ac, char **ar);

Test(infin_add, test_ex_1)
{
    int ac = 2;
    char *av[] = {"hello", "1456"};

    cr_assert_eq(is_conform(ac, av), 1);
}