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

char *conc_str(char const *str, char *calc_part, int start, int end)
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
    calc_part = concat_expr(str, calc_part, expr_start, expr_end);

    return (conc_str(str, calc_part, start_ind_hold, expr_end));
}

char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{
    int index = 0;

    expr = search_for_brackets(expr, index);
    index = 0;
    expr = search_for_priority(expr, index);
    index = 0;
    expr = search_for_regulars(expr, index);
    return (expr);
}
