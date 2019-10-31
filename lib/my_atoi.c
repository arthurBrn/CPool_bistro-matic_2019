/*
** EPITECH PROJECT, 2019
** myatoi
** File description:
** Own atoi function to turn an String to an int
*/

int my_atoi(char *str)
{
    int res = 0;
    int count = 0;

    while (str[count] != '\0') {
        res = res * 10 + (str[count] - '0');
        count++;
    }
    return (res);
}