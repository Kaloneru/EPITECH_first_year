/*
** EPITECH PROJECT, 2022
** draw_sprite.c
** File description:
** set ant draw a sprite
*/

#include "../../include/include.h"

void set_and_draw(sfSprite *sprite, sfIntRect rect, sfRenderWindow *window)
{
    sfSprite_setTextureRect(sprite, rect);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void set_and_draw_pos(sfSprite *sprite, sfIntRect rect,
                      sfRenderWindow *window, sfVector2f pos)
{
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}
