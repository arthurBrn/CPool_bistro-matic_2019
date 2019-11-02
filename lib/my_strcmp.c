/*
** EPITECH PROJECT, 2019
** my str compare
** File description:
** compare two strings
*/

int my_strcmp(char const *s1, char const *s2, int i1, int i2)
{
    int res = 0;

    while (s1[i1] == s2[i2] && (s1[i1] != '\0' || s2[i2] != '\0')) {
        i1++;
        i2++;
    }
    if (s1[i1] == s2[i2])
        return 0;
    else
        res = s1[i1] - s2[i2];
    return res;
}