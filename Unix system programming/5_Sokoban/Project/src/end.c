/*
** EPITECH PROJECT, 2022
** end.c
** File description:
** display the map a last time before closing the game
*/
#include "../include/include.h"

void end(inf_t *inf)
{
    clear();
    put_map(inf);
    clear();
}
