/*
** EPITECH PROJECT, 2021
** str_to_int.cv
** File description:
** str to int
*/

#include "my.h"

int str_to_int(char *str)
{
    int x = 0;
    int i = 0;

    while (str[i] != '\0') {
        x = x * 10 + str[i] - '0';
        i = i + 1;
    }
    return (x);
}
