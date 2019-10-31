/*
** EPITECH PROJECT, 2019
** my get number
** File description:
** returns a number sent to the functions as a string
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int neg = 1;

    while (str[i] != '\0') {
        if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            neg = neg * -1;
        if (str[i] >= '0' && str[i] <= '9') {
            a = a * 10;
            a = a + (str[i] - 48);
            b++;
        } else if (b > 0 && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            break;
        if (b > 9)
            return 0;
        i++;
    }
    return (a * neg);
}