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
    int sign_index = 0;
    int str_index = 0;
    int i = 0;
    int af_sign = 0;
    int bf_sign = 0;
    char *bef_sign = malloc(sizeof(char) * my_strlen(part_to_calc));
    char *aft_sign = malloc(sizeof(char) * my_strlen(part_to_calc));

    while (my_char_num(part_to_calc[i]) == 1) {
        bef_sign[i] = part_to_calc[i];
        i++;
    }
    bf_sign = my_atoi(bef_sign);
    sign_index = i;
    i++;
    while (my_char_num(part_to_calc[i]) == 1) {
        aft_sign[str_index] = part_to_calc[i];
        str_index++;
        i++;
    }
    af_sign = my_atoi(aft_sign);
    return (my_do_op(part_to_calc, sign_index, bf_sign, af_sign));
//    return (my_do_op(part_to_calc[sign_index], bf_sign, af_sign));
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

//int eval_expr(char const *str)
char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{
    int index = 0;
    int res = 0;
    char *str_holder;

    my_putstr(expr);
    while (expr[index] != '\0') {
        if ((expr[index] == ')') && (search_parenthesis_openning(expr, expr[index]) != -1)){
            str_holder = concat_strings(expr, find_expr_in_par(expr), search_parenthesis_openning(expr, index) ,index);
            expr = str_holder;
            index = 0;
        }
        index++;
    }
    while (expr[index] != '\0') {
        if (find_priori_sign(expr[index]) == 1) {
            my_putstr("WE HERE");
            str_holder = find_concerned_chars(expr, index);
            expr = str_holder;
            index = 0;
        }
        index++;
    }
    index = 0;
    return (expr);
}
