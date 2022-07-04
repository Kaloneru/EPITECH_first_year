/*
** EPITECH PROJECT, 2021
** octal_string.c
** File description:
** octal string
*/

#include <stdlib.h>
char *my_revstr(char *str);
int my_putstr(char const *str);

char *octal_ascii(char c)
{
    char *temp = malloc(sizeof(char) * 32);
    int i = 0;
    int n = c;

    while (n != 0) {
        temp[i] = n % 8 + '0';
        n = n / 8;
        i++;
    }
    while (i != 3) {
        temp[i] = '0';
        i++;
    }
    temp[i] = '\0';
    my_revstr(temp);
    my_putstr(temp);
    return (temp);
}
