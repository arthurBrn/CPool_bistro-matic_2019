/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** eval_expr
*/

#include "bistromatic.h"
#include "my.h"
#include <stdlib.h>

char *return_res(char *part_to_calc)
{
    char *res;

    if (nbr_of_sign(part_to_calc) == 84)
        return (84);
    if (nbr_of_sign(part_to_calc) > 1) {
        res = cut_str_several_signs(part_to_calc);
    } else if (nbr_of_sign(part_to_calc) <= 0) {
        return (part_to_calc);
    } else {
        res = cut_str_one_sign(part_to_calc);
    }
    return (res);
}

char *concat_strings(char const *str, char *calc_part, int start, int end)
{
    int str_index = 0;
    int res_str_index = 0;
    int str_two_index = 0;
    char *res_str = return_res(calc_part);
    int res_str_len = my_strlen(res_str);
    int new_len = ((my_strlen(str) - my_strlen(calc_part)) +my_strlen(res_str));
    char *str_two = malloc(sizeof(char) * (new_len + 1));

    while (str[str_index] != '\0') {
        if (str_index < start) {
            str_two[str_two_index] = str[str_index];
        }
        if ((str_index >= start) && (res_str[res_str_index] != '\0')) {
            str_two[str_two_index] = res_str[res_str_index];
            res_str_index++;
            res_str_len--;
        }
        if (res_str_len == 0 && str[str_index] != '\0') {
            str_two[str_two_index + 1] = str[end + 1];
            end++;
        }
        str_index++;
        str_two_index++;
    }
    return (str_two);
}

char *find_concerned_chars(char const *str, int index_sign)
{
    int count = 0;
    int expr_end = 0;
    int expr_start = 0;
    int index_holder = index_sign;
    int start_ind_hold = 0;
    char *calc_part;

    while (my_char_num(str[index_sign + 1]) == 1)
        index_sign++;
    expr_end = index_sign;
    index_sign = index_holder;
    while (my_char_num(str[index_sign - 1]) == 1)
        index_sign--;
    expr_start = index_sign;
    start_ind_hold = expr_start;
    calc_part = malloc(sizeof(char) * ((expr_end - expr_start) + 2));
    while (expr_start != expr_end + 1) {
        calc_part[count] = str[expr_start];
        count++;
        expr_start++;
    }
    return (concat_strings(str, calc_part, start_ind_hold, expr_end));
}

char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{
    int index = 0;
    char *str_holder;

    my_putstr(expr);
    while (expr[index] != '\0') {
        if ((expr[index] == ')') && (search_parenthesis_opening(expr, expr[index]) != -1)){
            my_putstr("IN FIRST IF");
            str_holder = concat_strings(expr, find_expr_in_par(expr), search_parenthesis_opening(expr, index) ,index);
            expr = str_holder;
            index = 0;
        }
        index++;
    }
    while (expr[index] != '\0') {
        if (find_priori_sign(expr[index]) == 1) {
            my_putstr("IN SECOND IF");
            str_holder = find_concerned_chars(expr, index);
            expr = str_holder;
            index = 0;
        }
        index++;
    }
    index = 0;
    while (expr[index] != '\0') {
        if (find_regular_sign(expr[index]) == 1) {
            my_putstr("IN LAST IF");
            str_holder = find_concerned_chars(expr, index);
            expr = str_holder;
            index = 0;
        }
        index++;
    }
    index = 0;
    return (expr);
}
