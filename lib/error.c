/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** File storing all error function
*/

#include "bistromatic.h"
#include "my.h"

void syntax_error_message(void)
{
    my_putstr(SYNTAX_ERROR_MSG);
    exit(EXIT_BASE);
}

void error_cases(char **av)
{
    if (my_strlen(av[1]) != 10)
        syntax_error_message();
    if (my_strlen(av[2]) != 7)
        syntax_error_message();
    must_not_match(av);
}

void must_not_match(char **av)
{
    int i = 0;
    int j = 0;

    for (; av[1][i] != '\0'; i++)
        while (av[2][j] != '\0')
            av[1][i] == av[2][j] ? syntax_error_message : j++;
}
