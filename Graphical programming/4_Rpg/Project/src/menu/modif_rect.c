/*
** EPITECH PROJECT, 2022
** modif_rect.c
** File description:
** modif the volume sprites
*/

#include "../../include/my_rpg.h"

void modif_rect(all_t *all, int i)
{
    i = modif_volume_one(all, i);
    i = modif_volume_two(all, i);
    i = modif_volume_three(all, i);
    i = modif_volume_four(all, i);
}
