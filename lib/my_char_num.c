/*
** EPITECH PROJECT, 2019
** my_char_alpha
** File description:
** Return 1 if the char passed as parameter is alphanumerique
*/

int my_char_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}