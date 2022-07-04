/*
** EPITECH PROJECT, 2022
** my_itoa.c
** File description:
** convert an integer to a string
*/

#include "antman.h"

int my_intlen(int i)
{
    int j = 0;
    if (i < 0)
        i = i * -1;
    while (i > 0) {
        i = i / 10;
        j = j + 1;
    }
    return j;
}

char *my_itoa(int i)
{
    int verif = 0;;
    int j = 0;
    char *str = malloc(sizeof(char) * my_intlen(i));
    int test = my_intlen(i);

    if (i < 0) {
        verif = 1;
        i = i * -1;
    }
    while (j != test) {
        str[j] = (i % 10) + '0';
        i = i / 10;
        j = j + 1;
    }
    if (verif == 1) {
        str[j] = '-';
        j++;
    }
    str[j] = '\0';
    return my_revstr(str);
}
