/*
** EPITECH PROJECT, 2022
** get_buffer.c
** File description:
** get the map
*/
#include "../../include/include.h"

void get_buffer(char *map, inf_t *inf)
{
    inf->map = str_to_word_array(map, '\n');
}
