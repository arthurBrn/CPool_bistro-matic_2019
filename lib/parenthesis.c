/*
** EPITECH PROJECT, 2019
** parenthesis.c
** File description:
** Search parenthesis
*/

#include <stdlib.h>
#include "my.h"

int search_parenthesis_opening(char const *str, int i)
{
    while (i < 0) {
        if (str[i] == '(') {
            return (i);
        }
        i--;
    }
    return (0);
}

int search_parenthesis_ending(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ')') {
            return (i);
        }
        i++;
    }
    return (0);
}

char *find_expr_in_par(char const *str)
{
    char *a = malloc(sizeof(char) * my_strlen(str));
    int i = 0;
    int index2 = search_parenthesis_ending(str);
    int index1 = search_parenthesis_opening(str, index2) + 1;

    my_putstr("Index first : ");
    my_putchar(index1 + '0');
    my_putchar('\n');
    while (index1 < index2) {
        a[i] = str[index1];
        index1++;
        i++;
    }
    my_putstr("Content of [a : ");
    my_putstr(a);
    my_putchar('\n');
    my_putstr("Index first : ");
    my_putchar(index1 + '0');
    my_putchar('\n');
    my_putstr("Index snd : ");
    my_putchar(index2 + '0');
    my_putchar('\n');
    return (a);
}
