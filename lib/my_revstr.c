/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Task 03
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char swap;
    int length = my_strlen(str);

    for (int i = 0; i < length / 2; i++) {
        swap = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = swap;
    }
    str[length + 1] = '\0';
    return (str);
}
