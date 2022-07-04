/*
** EPITECH PROJECT, 2022
** fonction.c
** File description:
** runner
*/
#include "include/ouais.h"
#include "include/include.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int d = 0;

    while (src[d] != '\0') {
        dest[i] = src[d];
        i += 1;
	d += 1;
    }
    dest[i] = '\0';
    return dest;
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return i;
}

static int compare_char(char char1, char char2)
{
    if (char1 > char2)
        return 1;
    if (char1 == char2)
        return 0;
    else
        return -1;
}

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] != str2[i])
            return compare_char(str1[i], str2[i]);
        if (str2[i] == '\0')
            return 1;
    i++;
    }
    if (str1[i - 1] == '\0' && str2[i - 1] != '\0')
        return -1;
    return 0;
}
