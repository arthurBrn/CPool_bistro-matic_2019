/*
** EPITECH PROJECT, 2019
** my reverse str
** File description:
** reverse a string
*/

#include <stdlib.h>

void my_revstr2(unsigned char **str)
{
    int i = 0;
    int j = 0;
    char a;

    while (str[0][i] != '\0')
        i++;
    if (i != 0)
        i--;
    while (i != j && i > j) {
        a = str[0][i];
        str[0][i] = str[0][j];
        str[0][j] = a;
        j++;
        i--;
    }
}
