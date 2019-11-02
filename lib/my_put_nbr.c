/*
** EPITECH PROJECT, 2019
** my put nbr
** File description:
** disply number given as a parameter
*/

void my_putchar(char c);

int my_put_nbr(char nb)
{
    int nb2[9] = {0};
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    while (nb >= 10) {
        nb2[i] = nb % 10;
        nb = nb / 10;
        i++;
    }
    if (nb < 10)
        nb2[i] = nb;
    while (i >= 0) {
        my_putchar(nb2[i] + '0');
        i--;
    }
}