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
        return 1;
    }
    if (ac < 3) {
        my_putstr("need more arguments\n");
        return 1;
    }
    a = my_str_isnum(av[1]);
    b = my_str_isnum(av[2]);
    if (a || b) {
        my_putstr("invalid digit\n");
        return 1;
    }
    return 0;
}

int sign(char *av)
{
    int sign = 1;

    if (av[0] == '-')
        sign = sign * -1;
    return sign;  
}

int find_begin(char *av)
{
    int i = 0;

    while (av[i] < '1' || av[i] > '9')
        i++;
    return i;
}

int addition(char **av, unsigned char **resptr) //a séparer ou optimiser
{
    int last1 = my_strlen(av[1]) - 1; //possible ecart de un a cause du signe
    int last2 = my_strlen(av[2]) - 1;
    int val1 = 0;
    int val2 = 0;
    int res = 0;
    int ret = 0;
    int i = last1 + 1;

    while ((last1 >= find_begin(av[1])) || (last2 >= find_begin(av[2]))) {
        if (last1 >= find_begin(av[1])) {
            val1 = (av[1][last1] - '0') * sign(av[1]);
            last1--;
        } else
            val1 = 0;
        if (last2 >= find_begin(av[2])) {
            val2 = (av[2][last2] - '0') * sign(av[2]);
            last2--;
        } else
            val2 = 0;
        res = val1 + val2 + ret;
        if (res >= 10) {
            res = res - 10;
            ret = 1;
        } else
            ret = 0;
        resptr[0][i] = res + '0';
        my_putchar('c');
        i--;
    }
    if (ret != 0)
        resptr[0][i] = ret + '0';
    return 0;
}

int infin_add(int ac, char **av)
{
    unsigned char *res;
    unsigned char *resptr[0] = {&res};

    if (is_conform(ac, av))
        return 0;
    if (my_strlen(av[1]) > my_strlen(av[2]))
        res = malloc(sizeof(char) * my_strlen(av[1]) + 1);
    else
        res = malloc(sizeof(char) * my_strlen(av[2]) + 1);
    addition(av, resptr);
    //if (resptr[0][0] < '1' || resptr[0][0] > '9' || resptr[0][0] != '-')
        //my_number_shift(resptr);
    my_putstr(resptr[0]);
    free(res);
    return 0;
}