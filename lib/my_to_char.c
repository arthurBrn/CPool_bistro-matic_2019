/*
** EPITECH PROJECT, 2019
** my to char
** File description:
** convert an int to a char
*/

#include <stdlib.h>
#include "my.h"

char *my_to_char(int expression)
{
    char *final_str = malloc(sizeof(char) * 1000);
    int i = 0;
    int flag = 0;

    while (expression >= 10) {
        final_str[i] = (expression % 10) + 48;
        expression = expression / 10;
        i++;
        if (expression == 10)
            flag = 1;
    }
    if (!(flag == 1))
        final_str[i] = (expression + 48);

    return (my_revstr(final_str));
}
