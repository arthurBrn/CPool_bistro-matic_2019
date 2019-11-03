/*
** EPITECH PROJECT, 2019
** my strlen
** File description:
** counts and return the number of characters found in the string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}