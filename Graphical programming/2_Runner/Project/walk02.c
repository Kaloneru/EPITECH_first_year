/*
** EPITECH PROJECT, 2022
** walk02.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

int walk6(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 750) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso06, NULL);
        sfSprite_setTexture(\
            all->perso->sprite_perso06, \
            all->perso->texture_perso06, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso06, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso06, all->perso->posp);
        counter++;
        if (counter == 900)
            counter = 0;
    }
    return counter;
}
