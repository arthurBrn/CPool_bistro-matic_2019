/*
** EPITECH PROJECT, 2019
** conv.c
** File description:
** converts in given base
*/

char **conv(char *base, char *res)
{
    int i = 0;
    char *conved = NULL;
    int len = my_strlen(res);
    int j = 0;

    conved = malloc(sizeof(len));
    while (res[i] != '\0') {
        conved[i] = base[res[i]-48];
    }
    return conved;
}
