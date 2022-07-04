/*
** EPITECH PROJECT, 2022
** death02.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

int display_death08(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter > 750) {
        sfRenderWindow_drawSprite(window, \
                                  all->death->sprite_death06, NULL);
        sfSprite_setTexture(all->death->sprite_death06,\
                            all->death->texture_death06, sfFalse);
        sfSprite_setScale(all->death->sprite_death06,\
                          all->death->scaled);
        sfSprite_setPosition(all->death->sprite_death06,\
                             all->death->posd);
        counter++;
    }
    return counter;
}
