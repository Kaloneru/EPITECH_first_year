/*
** EPITECH PROJECT, 2022
** check_elem.c
** File description:
** check if there is only the elem needed
*/
#include "../../include/include.h"

void check_elem(inf_t *inf)
{
    for (int i = 0; inf->buffer[i] != '\0'; i++) {
        if (inf->buffer[i] != ' ' && inf->buffer[i] != 'P' &&
            inf->buffer[i] != 'X' && inf->buffer[i] != '#' &&
            inf->buffer[i] != 'O' && inf->buffer[i] != '\n')
            inf->end = 3;
    }
}
