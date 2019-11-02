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
    //if (resptr[0][0] < '1' || resptr[0][0] > '9' || resptr[0][0] != '-')
      //  my_number_shift(resptr);
    resptr[0][i] = '\0';
}