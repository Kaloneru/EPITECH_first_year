/*
** EPITECH PROJECT, 2022
** walk.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

int walk1(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter <= 150) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso01, NULL);
        sfSprite_setTexture\
            (all->perso->sprite_perso01,\
             all->perso->texture_perso01, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso01, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso01, all->perso->posp);
        counter++;
    }
    return counter;
}

int walk2(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 150 && counter <= 300) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso02, NULL);
        sfSprite_setTexture\
            (all->perso->sprite_perso02,\
             all->perso->texture_perso02, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso02, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso02, all->perso->posp);
        counter++;
    }
    return counter;
}
	
int walk3(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 300 && counter <= 450) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso03, NULL);
        sfSprite_setTexture(\
            all->perso->sprite_perso03, \
            all->perso->texture_perso03, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso03, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso03, all->perso->posp);
        counter++;
    }
    return counter;
}

int walk4(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 450 && counter <= 600) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso04, NULL);
        sfSprite_setTexture(\
            all->perso->sprite_perso04, \
            all->perso->texture_perso04, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso04, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso04, all->perso->posp);
        counter++;
    }
    return counter;
}
	
int walk5(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 600 && counter <= 750) {
        sfRenderWindow_drawSprite(\
            window, all->perso->sprite_perso05, NULL);
        sfSprite_setTexture(\
            all->perso->sprite_perso05, \
            all->perso->texture_perso05, sfFalse);
        sfSprite_setScale(\
            all->perso->sprite_perso05, all->perso->scalep);
        sfSprite_setPosition(\
            all->perso->sprite_perso05, all->perso->posp);
        counter++;
    }
    return counter;
}
