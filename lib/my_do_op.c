/*
** EPITECH PROJECT, 2019
** my do operation
** File description:
** do operation
*/

#include <stdlib.h>
#include "my.h"

//int my_do_op(char sign, int bf_sign, int af_sign)
char *my_do_op(char *calc_part, int sign, int bf_sign, int af_sign)
{
    int res = 0;
    int calc_part_size = my_strlen(calc_part);

    if (calc_part[sign]  == '*')
        res = (bf_sign * af_sign);
    if (calc_part[sign]  == '/')
        res = (bf_sign / af_sign);
    if (calc_part[sign]  == '+')
        res = (bf_sign + af_sign);
    if (calc_part[sign]  == '-')
        res = (bf_sign - af_sign);
    if (calc_part[sign]  == '%')
        res = (bf_sign % af_sign);
    return (my_to_char(res, calc_part_size));
//    return (res);
}
