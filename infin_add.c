/*
** EPITECH PROJECT, 2019
** infinit addition
** File description:
** addition of two strings
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int calc_ret(int res, int i, unsigned char **resptr)
{
    int ret = 0;
    
    if (res >= 10) {
        res = res - 10;
        ret = 1;
    } else if (res < 0) {
        res = 10 + res;
        ret = -1;
    } else
        ret = 0;
    my_putstr("vrai resultat = ");
    my_put_nbr(res);
    my_putchar('\n');
    resptr[0][i] = res + '0';
    return ret;
}

int who_is_biggest(char **av)
{
    int begin1 = find_begin(av[1]);
    int begin2 = find_begin(av[2]);
    int val = my_strcmp(av[1], av[2], begin1, begin2);
    char *res;

    if (my_strnlen(av[1], 0) > my_strnlen(av[2], 0))
        res = malloc(sizeof(char) * my_strnlen(av[1], 0) + 1);
    else
        res = malloc(sizeof(char) * my_strnlen(av[2], 0) + 1);
    if (my_strnlen(av[1], begin1) > my_strnlen(av[2], begin2))
        return 0;
    if (val < 0 || (my_strnlen(av[1], begin1) < my_strnlen(av[2], begin2))) {
        res = av[1];
        av[1] = av[2];
        av[2] = res;
        return 1;
    }
    return 0;
}

char retrun_sign(char *av1, char *av2)
{
    int begin1 = find_begin(av1);
    int begin2 = find_begin(av2);
    int len1 = my_strnlen(av1, begin1);
    int len2 = my_strnlen(av2, begin2);
    int val = my_strcmp(av1, av2, begin1, begin2);
    char sign;

    if ((av1[0] == '-') && (len1 > len2))
        return sign = '-';
    else if ((av2[0] == '-') && (len2 > len1))
        return sign = '-';
    if ((av1[0] == '-') && (val > 0) && (len1 == len2))
        return sign = '-';
    else if ((av2[0] == '-') && (val < 0) && (len1 == len2))
        return sign = '-';
    return sign = '+';
}

int addition(char **av, unsigned char **resptr, int sign)
{
    int last1 = my_strnlen(av[1], 0) - 1; 
    int last2 = my_strnlen(av[2], 0) - 1;
    int i = 0;
    int val1 = 0;
    int val2 = 0;
    int res = 0;
    int ret = 0;

    while ((last1 >= find_begin(av[1])) || (last2 >= find_begin(av[2]))) {
        val1 = find_val(last1, find_begin(av[1]), av[1]);
        val2 = find_val(last2, find_begin(av[2]), av[2]);
        if (av[1][0] == '-') {
            val1 = val1 * -1;
            val2 = val2 * -1;
        }
        if (last1 >= find_begin(av[1]))
            last1--;
        if (last2 >= find_begin(av[2]))
            last2--;
        res = val1 + val2 + ret;
        ret = calc_ret(res, i, resptr);
        i++;
    }
    if (ret != 0)
        resptr[0][i] = ret + '0';
    my_revstr2(resptr);
    return 0;
}

int infin_add(int ac, char **av)
{
    unsigned char *res;
    unsigned char **resptr;
    int sign = 0;
    char sig = '+';

    if (is_conform(ac, av))
        return 84;
    if (my_strnlen(av[1], 0) > my_strnlen(av[2], 0))
        res = malloc(sizeof(char) * my_strnlen(av[1], 0) + 1);
    else
        res = malloc(sizeof(char) * my_strnlen(av[2], 0) + 1);
    resptr = &res;
    if ((av[1][0] == '-') || (av[2][0] == '-'))
        sig = retrun_sign(av[1], av[2]);
    if (av[1][0] == '-' || av[2][0] == '-')
        sign = who_is_biggest(av);
    addition(av, resptr, sign);
    my_putchar(sig);
    my_putstr(resptr[0]);
    return 0;
}