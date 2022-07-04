/*
** EPITECH PROJECT, 2022
** is_someting.C
** File description:
** desc
*/

#include "lemin.h"

int is_alpha(char cara)
{
    if (cara >= 'a' && cara <= 'z')
        return 1;
    if (cara >= 'A' && cara <= 'Z')
        return 1;
    return 0;
}

int is_num(char cara)
{
    if (cara >= '0' && cara <= '9')
        return 1;
    return 0;
}

int is_numb(char *str, int i, char sep)
{
    for (; str[i] != sep && str[i] != '\0'; i++) {
        if (is_num(str[i]) == 0)
            return 1;
    }
    return 0;
}

int is_word(char *str, int i, char sep)
{
    if (!str)
        return 1;
    for (; str[i] != sep && str[i] != '\0'; i++) {
        if (is_alpha(str[i]) == 0)
            return 1;
    }
    return 0;
}
