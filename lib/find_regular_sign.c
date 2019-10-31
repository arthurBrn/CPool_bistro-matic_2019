/*
** EPITECH PROJECT, 2019
** find_regular_sign
** File description:
** Return 1 if the char passed in parameter contains + or -
*/

#include "my.h"

int find_regular_sign(char c)
{
    if (c == '+' || c == '-')
        return (1);
    return (0);
}
