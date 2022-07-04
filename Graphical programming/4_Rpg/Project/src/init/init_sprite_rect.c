/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_sprite_rect.c
*/

#include "../../include/my_rpg.h"

sfIntRect *init_sprite_rect(int nb_alloc, int width, int height, int len)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect) * (nb_alloc + 1));
    int x = 0, y = 0, i = 0;

    while (i != nb_alloc) {
        if (x == len) {
            x = 0;
            y++;
        }
        rect[i].left = width * x;
        rect[i].top = height * y;
        rect[i].width = width - 1;
        rect[i].height = height - 1;
        i++;
        x++;
    }
    return rect;
}
