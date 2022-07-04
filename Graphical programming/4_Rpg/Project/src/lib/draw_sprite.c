/*
** EPITECH PROJECT, 2022
** draw_sprite.c
** File description:
** set ant draw a sprite
*/

#include "../../include/my_rpg.h"

void draw_sprite(all_t *all, int i)
{
    sfSprite_setScale(all->npc[i].sprite, all->npc[i].scale);
    sfSprite_setTextureRect(all->npc[i].sprite, all->npc[i].rect);
    sfSprite_setPosition(all->npc[i].sprite, all->npc[i].pos);
    sfRenderWindow_drawSprite(all->window->window,
    all->npc[i].sprite, NULL);
}

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
