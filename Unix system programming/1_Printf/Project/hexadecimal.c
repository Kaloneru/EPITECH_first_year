/*
** EPITECH PROJECT, 2021
** hexadecimal.c
** File description:
** convert a decimal to a hexadecimal
*/
#include <stdio.h>
#include <stdlib.h>
int my_putstr(char const *str);
char *my_revstr(char *str);

static char X_plus_nine(int nb)
{
    char i;

    i = nb - 10 + 'A';
    return i;
}

char *decimal_to_majx_hexadecimal(unsigned int nb)
{
    char *result = malloc(sizeof(char) * 10);
    int i = 0;

    while (nb != 0) {
        if ((nb % 16) <= 9)
            result[i] = nb % 16 + '0';
	if ((nb % 16) > 9)
            result[i] = X_plus_nine(nb % 16);
        nb = nb / 16;
        i++;
    }
    result[i + 1] = '\0';
    return my_revstr(result);
}

static char x_plus_nine(int nb)
{
    char i;

    i = nb - 10 + 'a';
    return i;
}

char *decimal_to_x_hexadecimal(unsigned int nb)
{
    char *result = malloc(sizeof(char) * 10);
    int i = 0;
    
    while (nb != 0) {
        if ((nb % 16) <= 9)
            result[i] = nb % 16 + '0';
        if ((nb % 16) > 9)
            result[i] = x_plus_nine(nb % 16);
        nb = nb / 16;
        i++;
    }
    result[i + 1] = '\0';
    return my_revstr(result);
}
