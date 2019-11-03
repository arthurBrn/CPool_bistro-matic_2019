/*
** EPITECH PROJECT, 2019
** nbr_of_sign.c
** File description:
** return the number of sign in the string
*/

#include "bistromatic.h"
#include "my.h"

int nbr_of_sign(char *str)
{
    int i = 0;
    int count = 0;
    int length = my_strlen(str);

    if (my_strlen(str) == 0)
        return (84);
    while (i != length) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            count++;
        if (str[i] == '%')
            count++;
        i++;
    }
    return (count);
}
