/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** task03
*/
#include <unistd.h>

int my_putchar(char c);

int my_strlenght(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int a = 0;
    int b;
    int c = my_strlenght(str) - 1;

    while (c > a) {
        b = str[a];
        str[a] = str[c];
        str[c] = b;
        c = c - 1;
        a = a + 1;
    }
    return (str);
}

char *my_revstr(char *str)
{
    my_strlenght(str);
    my_evil_str(str);
    return (str);
}
