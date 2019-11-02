/*
** EPITECH PROJECT, 2019
** infinit addition
** File description:
** addition of two strings
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int is_conform(int ac, char **av)
{
    int a = 0;
    int b = 0;

    if (ac > 3) {
        my_putstr("too much arguments\n");
        return 84;
    }
    if (ac < 3) {
        my_putstr("need more arguments\n");
        return 84;
    }
    a = my_str_isnum(av[1]);
    b = my_str_isnum(av[2]);
    if (a || b) {
        my_putstr("invalid digit\n");
        return 84;
    }
    return 0;
}

int find_val(int last, int begin, char *av)
{
    int val = 0;

    if (last >= begin)
        val = (av[last] - '0') * my_find_sign(av);
    else
        val = 0;
    return val;
}

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
    //int res = my_strcmp(av[1], av[2], begin1, begin2);
    return 0;
}

int addition(char **av, unsigned char **resptr) //a séparer ou optimiser
{
    int last1 = my_strlen(av[1]) - 1; 
    int last2 = my_strlen(av[2]) - 1;
    int i = 0;
    int val1 = 0;
    int val2 = 0;
    int res = 0;
    int ret = 0;

    while ((last1 >= find_begin(av[1])) || (last2 >= find_begin(av[2]))) {
        val1 = find_val(last1, find_begin(av[1]), av[1]);
        val2 = find_val(last2, find_begin(av[2]), av[2]);
        if (last1 >= find_begin(av[1]))
            last1--;
        if (last2 >= find_begin(av[2]))
            last2--;
        my_put_nbr(val1);
        my_putchar('+');
        my_put_nbr(val2);
        my_putstr(" retenue = ");
        my_put_nbr(ret);
        my_putchar('\n');
        res = val1 + val2 + ret;
        my_putstr("resultat = ");
        my_put_nbr(res);
        my_putchar('\n');
        ret = calc_ret(res, i, resptr);
        i++;
    }
    if (ret != 0)
        resptr[0][i] = ret + '0';
    my_revstr(resptr);
    return 0;
}

int infin_add(int ac, char **av)
{
    unsigned char *res;
    unsigned char **resptr;

    if (is_conform(ac, av))
        return 84;
    if (my_strlen(av[1]) > my_strlen(av[2]))
        res = malloc(sizeof(char) * my_strlen(av[1]) + 1);
    else
        res = malloc(sizeof(char) * my_strlen(av[2]) + 1);
    resptr = &res;
    addition(av, resptr);
    my_putstr(resptr[0]);

    return 0;
}