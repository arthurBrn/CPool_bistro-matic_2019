/*
** EPITECH PROJECT, 2019
** my do operation
** File description:
** do operation
*/

#include <stdlib.h>
#include "my.h"

char *my_do_op(char sign, int bf_sign, int af_sign)
{
    int res = 0;

    if (sign  == '*')
        res = (bf_sign * af_sign);
    if (sign  == '/')
        res = (bf_sign / af_sign);
    if (sign  == '+')
        res = (bf_sign + af_sign);
    if (sign  == '-')
        res = (bf_sign - af_sign);
    if (sign  == '%')
        res = (bf_sign % af_sign);
    return (my_to_char(res));
}
