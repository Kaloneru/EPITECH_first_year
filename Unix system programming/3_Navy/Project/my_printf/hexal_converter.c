/*
** EPITECH PROJECT, 2021
** hexal_converter.c
** File description:
** desc
*/

#include <stdlib.h>
char *my_revstr(char *str);

static char check(int n)
{
    char c;

    if (n > 9 && n < 16) {
        c = n - 10 + 'a';
        return (c);
    }
    return (n + '0');
}

char *hexal_converter(unsigned int n)
{
    char *temp = malloc(sizeof(char) * 32);
    int i = 0;

    while (n != 0) {
        temp[i] = check(n % 16);
        n = n / 16;
        i++;
    }
    temp[i] = '\0';
    my_revstr(temp);
    return (temp);
}
