/*
** EPITECH PROJECT, 2019
** print_help.c
** File description:
** prints usage and descrption of calc function
*/

void my_putstr(char *string);

void print_help(void)
{
    char *usage = "USAGE\n./calc base operators size_read\n\n";
    char *desc = "DESCRIPTION\n- base: all the symbols of the base\n
                 - operators: the symbols for the parentheses and the
                 5 operators\n- size_read: number of characters to be read\n";

    my_putstr(usage);
    my_putstr(desc);
}
