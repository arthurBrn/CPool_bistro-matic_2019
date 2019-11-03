/*
** EPITECH PROJECT, 2019
** my strlen
** File description:
** counts and return the number of characters found in the string
*/

int my_strnlen(char const *str, int i)
{
    int j = i;

    while (str[j] != '\0')
        j++;
    return j - i;
}