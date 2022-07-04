/*
** EPITECH PROJECT, 2022
** death.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

int display_death03(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter <= 150) {
        sfRenderWindow_drawSprite(\
            window, all->death->sprite_death01, NULL);
        sfSprite_setTexture(\
            all->death->sprite_death01, \
            all->death->texture_death01, sfFalse);
        sfSprite_setScale(\
            all->death->sprite_death01, all->death->scaled);
        sfSprite_setPosition(\
            all->death->sprite_death01, all->death->posd);
        counter++;
    }
    return counter;
}

int display_death04(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter > 150 && counter <= 300) {
        sfRenderWindow_drawSprite(\
            window, all->death->sprite_death02, NULL);
        sfSprite_setTexture(\
            all->death->sprite_death02, \
            all->death->texture_death02, sfFalse);
        sfSprite_setScale(\
            all->death->sprite_death02, all->death->scaled);
        sfSprite_setPosition(\
            all->death->sprite_death02, all->death->posd);
        counter++;
    }
    return counter;
}

int display_death05(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter > 450 && counter <= 600) {
        sfRenderWindow_drawSprite(\
            window, all->death->sprite_death04, NULL);
        sfSprite_setTexture(\
            all->death->sprite_death04,\
            all->death->texture_death04, sfFalse);
        sfSprite_setScale(\
            all->death->sprite_death04, all->death->scaled);
        sfSprite_setPosition(\
            all->death->sprite_death04, all->death->posd);
        counter++;
    }
    return counter;
}

int display_death06(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter > 450 && counter <= 600) {
        sfRenderWindow_drawSprite(window, \
                                  all->death->sprite_death04, NULL);
        sfSprite_setTexture(all->death->sprite_death04, \
                            all->death->texture_death04, sfFalse);
        sfSprite_setScale(all->death->sprite_death04, \
                          all->death->scaled);
        sfSprite_setPosition(all->death->sprite_death04, \
                             all->death->posd);
        counter++;
    }
    return counter;
}

int display_death07(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter > 600 && counter <= 750) {
        sfRenderWindow_drawSprite(window, \
                                  all->death->sprite_death05, NULL);
        sfSprite_setTexture(all->death->sprite_death05, \
                            all->death->texture_death05, sfFalse);
        sfSprite_setScale(all->death->sprite_death05, \
                          all->death->scaled);
        sfSprite_setPosition(all->death->sprite_death05, \
                             all->death->posd);
        counter++;
    }
    return counter;
}

