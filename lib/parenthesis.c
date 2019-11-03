/*
** EPITECH PROJECT, 2019
** parenthesis.c
** File description:
** Search parenthesis
*/

#include <stdlib.h>
#include "my.h"

int search_parenthesis_openning(char const *str, int i)
{
    int str_len = my_strlen(str);

    if (i == -1)
        return (i);
    while (str[i] != '(' || i != my_strlen(str)) {
        if (str[i] == '(')
            return (i);
        i--;
    }
    return (-1);
}

int search_parenthesis_ending(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ')')
            return (i);
        i++;
    }
    return (-1);
}

char *find_expr_in_par(char const *str)
{
    int i = 0;
    int index2 = search_parenthesis_ending(str);
    int index1 = search_parenthesis_openning(str, index2);
    char *a = malloc(sizeof(char) * (index2 - index1) + 1);
    int index_first_par = index1;

    if (index2 != -1 && index1 != -1) {
        while ((index1 + 1) <= (index2 - 1)) {
            a[i] = str[index1 + 1];
            index1++;
            i++;
        }
    }
    return (a);
}
