/*
** EPITECH PROJECT, 2021
** mdr
** File description:
** mdr
*/

#include "../../include/include.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str [i] != '\0') {
        i = i + 1;
    }
    return (i);
}
