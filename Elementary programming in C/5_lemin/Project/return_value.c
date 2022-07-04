/*
** EPITECH PROJECT, 2022
** return_value.c
** File description:
** desc
*/

#include "lemin.h"

int return_one(char *str, char sep)
{
    int i = 0;
    for (; str[i] != sep; i++)
        if (str[i] == '\0')
            return 0;
    i++;
    if (is_numb(str, i, sep) == 1) return 0;
    for (; str[i] != sep && str[i] != '\0'; i++);
    i++;
    if (is_numb(str, i, sep) == 1) return 0;
    for (; str[i] != sep && str[i] != '\0'; i++);
    if (str[i] != '\0') return 0;
    return 1;
}

int return_two(char *str, char sep)
{
    int i = 0;
    int size = 0;

    for (; str[i] != sep && str[i] != '\0'; i++);
    if (i == 0) return 0;
    size = i;
    if (str[i] != '-') return 0;
    i++;
    for (; str[i] != sep && str[i] != '\0'; i++);
    if (i == size + 1) return 0;
    if (str[i] != '\0') return 0;
    return 1;
}

int return_three_four(char *str, char sep)
{
    int i = 2;
    if (str[0] != '#') return 0;
    if (str[1] != '#') return 0;
    if (is_word(str, i, sep) == 1) return 0;
    return 1;
}

int return_five(char *str)
{
    if (is_num(str[0]) == 0) return 0;
    return 1; 
}
