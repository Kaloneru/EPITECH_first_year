/*
** EPITECH PROJECT, 2022
** set_structures.c
** File description:
** set all the values of the structures uses
*/

#include "../include/include.h"

void set_structures(char **argv, inf_t *inf, point_t *point)
{
    point->i_point = 0;
    point->i_map = 0;
    point->j_map = 0;

    inf->nb_o = 0;
    inf->end = 0;
    inf->buffer = open_and_read(argv[1]);
}
