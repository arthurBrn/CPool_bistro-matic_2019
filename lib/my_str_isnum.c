/*
** EPITECH PROJECT, 2019
** my str is num
** File description:
** returns 1 if the string contain digits else 0
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9' || str[i] != '-')
            return 0;
        i++;
    }
    return 1;
}
