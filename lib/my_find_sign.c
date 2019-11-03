/*
** EPITECH PROJECT, 2019
** find sign
** File description:
** find sign in a string of numbers
*/

int my_find_sign(char *av)
{
    int sign = 1;

    if (av[0] == '-')
        sign = sign * -1;
    return sign;
}
