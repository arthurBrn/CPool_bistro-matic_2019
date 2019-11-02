/*
** EPITECH PROJECT, 2019
** find begin
** File description:
** find the first number in a string
*/

int find_begin(char *av)
{
    int i = 0;

    while (av[i] < '1' || av[i] > '9')
        i++;
    return i;
}