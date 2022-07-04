/*
** EPITECH PROJECT, 2021
** base_to_base.c
** File description:
** base converter
*/
#include <stdio.h>
#include <stdlib.h>
char *my_revstr(char *str);

char *decimal_to_binary(int nb)
{
    char *result = malloc(sizeof(char) * 32);
    int i = 0;
    
    while (nb != 0) {
        result[i] = (nb % 2) + '0';
        nb = nb / 2;
        i++;
    }
    result[i + 1] = '\0';
    return my_revstr(result);
}

char *decimal_to_octal(int nb)
{
    char *result = malloc(sizeof(char) * 32);
    int i = 0;

    while (nb != 0) {
        result[i] = (nb % 8) + '0';
	nb = nb / 8;
        i++;
    }
    result[i + 1] = '\0';
    return my_revstr(result);
}
