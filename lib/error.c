/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** File storing all error function
*/


void syntax_error_brackets(char const *expr)
{
    int i = 0;

    while (expr[i] != '\0') {
        if (search_parenthesis_ending(expr) )
    }
}

void syntax_error_message(void)
{
    my_putstr(SYNTAX_ERROR_MSG);
    exit(EXIT_BASE);
}
