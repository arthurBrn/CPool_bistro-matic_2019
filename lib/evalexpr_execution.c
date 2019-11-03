/*
** EPITECH PROJECT, 2019
** evalexpr_execution.c
** File description:
** Gather all the starting action the eval_expr must carry
*/

#include "my.h"

char *search_for_brackets(char const *expr, int index)
{
    while (expr[index] != '\0') {
        if ((expr[index] == ')') && (find_open_par(expr, expr[index]) != -1)) {
            expr = conc_str(expr, find_expr_in_par(expr), find_open_par((expr,index), index));
            index = 0;
        }
        index++;
    }
    return (expr);
}

char *search_for_priority(char const *expr, int index)
{
    while (expr[index] != '\0') {
        if (find_priori_sign(expr[index]) == 1) {
            expr = find_concerned_chars(expr, index);
            index = 0;
        }
        index++;
    }
    return (expr);
}

char *search_for_regulars(char const *expr, int index)
{
    while (expr[index] != '\0') {
        if (find_regular_sign(expr[index]) == 1) {
            expr = find_concerned_chars(expr, index);
            index = 0;
        }
        index++;
    }
    return (expr);
}

