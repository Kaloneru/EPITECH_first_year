/*
** EPITECH PROJECT, 2021
** octal_converter.c
** File description:
** octal converter
*/

#include <stdlib.h>
char *my_revstr(char *str);
int my_putstr(char const *str);
int str_to_int(char *str);

int octal_converter(unsigned int n)
{
    char *temp = malloc(sizeof(char) * 32);
    int i = 0;

    while (n != 0) {
        temp[i] = n % 8 + '0';
        n = n / 8;
        i++;
    }
    temp[i] = '\0';
    my_revstr(temp);
    return (str_to_int(temp));
}
