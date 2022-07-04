/*
** EPITECH PROJECT, 2021
** base_converter.c
** File description:
** base converter
*/

#include <stdlib.h>
char *my_revstr(char *str);
int str_to_int(char *str);

int binary_converter(unsigned int n)
{
    char *temp = malloc(sizeof(char) * 32);
    int i = 0;

    while (n != 0) {
        temp[i] = n % 2 + '0';
        n = n / 2;
        i++;
    }
    temp[i] = '\0';
    my_revstr(temp);
    return (str_to_int(temp));
}
