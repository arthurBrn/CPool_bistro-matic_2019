/*
** EPITECH PROJECT, 2019
** my number shift
** File description:
** shift a string number to the left
*/

void my_number_shift(unsigned char **resptr)
{
    int i = 0;

    while (resptr[0][i + 1] != '\0') {
        resptr[0][i] = resptr[0][i + 1];
        i++;
    }
    i = 0;
    resptr[0][i] = '\0';
}
