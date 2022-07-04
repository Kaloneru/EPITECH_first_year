/*
** EPITECH PROJECT, 2022
** check_perso.c
** File description:
** check if there is one only player
*/

#include "../../include/include.h"

void check_perso(inf_t *inf)
{
    int nb_perso = 0;

    for (int i = 0; inf->buffer[i] != '\0'; i++) {
        if (inf->buffer[i] == 'P')
            nb_perso++;
    }
    if (nb_perso > 1)
        inf->end = 3;
}
