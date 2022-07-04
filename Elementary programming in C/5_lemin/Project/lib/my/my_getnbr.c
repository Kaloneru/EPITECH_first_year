/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** desc
*/

#include "my.h"

int my_getnbr(char const *str)
{
    char temp = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9')) {
            temp = str[i + 1];
            my_putchar(temp);
        }
    }
    return 0;
}
