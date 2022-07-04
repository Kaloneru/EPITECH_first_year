/*
** EPITECH PROJECT, 2022
** lib.c
** File description:
** int_to_str.c
*/

#include "my.h"

char *int_to_str(int nb)
{
    char *res;
    int tmp = nb;
    int neg = 0;
    int digit = 0;
    int i = 0;

    for (;tmp > 9; digit++)
        tmp = tmp / 10;
    digit++;
    i = digit + neg;
    res = malloc(sizeof(char) *(i + 1));
    res[i] = '\0';
    i--;
    for (; nb > 9; i--) {
        res[i] = nb % 10 + '0';
        nb = nb / 10;
    }
    res[i] = nb + '0';
    return res;
}
