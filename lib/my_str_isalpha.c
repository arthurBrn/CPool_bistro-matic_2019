/*
** EPITECH PROJECT, 2019
** my str is alpha
** File description:
** returns 1 if the strings passed as parameter only contains
** alphabetic characters and 0 if the string contains another type
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 1;
    while (str[i] != '\0') {
        if ((str[i] < 'a' || str[i] > 'z')
        && (str[i] < 'A' || str[i] > 'Z')) {
            return 0;
        }
        i++;
    }
    return 1;
}