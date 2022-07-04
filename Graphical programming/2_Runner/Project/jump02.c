/*
** EPITECH PROJECT, 2022
** jump02.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

int jump01(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter >= 901 && counter <= 1200) {
        all->perso->posp.y -= 1;
        sfRenderWindow_drawSprite(window, all->jump->sprite_jump01, NULL);
        sfSprite_setTexture(all->jump->sprite_jump01, all->jump->texture_jump01, sfFalse);
        sfSprite_setScale(all->jump->sprite_jump01, all->jump->scalej01);
        sfSprite_setPosition(all->jump->sprite_jump01, all->perso->posp);
        sfRenderWindow_drawSprite(window, all->jump->sprite_jump01, NULL);
        counter++;
    }
    return counter;
}

int jump02(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 1200 && counter <= 1300) {
        all->perso->posp.y += 1;
        sfRenderWindow_drawSprite(window, all->jump->sprite_jump02, NULL);
        sfSprite_setTexture(all->jump->sprite_jump02, all->jump->texture_jump02, sfFalse);
        sfSprite_setScale(all->jump->sprite_jump02, all->jump->scalej);
        sfSprite_setPosition(all->jump->sprite_jump02, all->perso->posp);
        counter++;
    }
    return counter;
}

int jump03(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 1300 && counter <= 1400) {
        all->perso->posp.y += 1;
        sfRenderWindow_drawSprite(window, all->jump->sprite_jump03, NULL);
        sfSprite_setTexture(all->jump->sprite_jump03, all->jump->texture_jump03, sfFalse);
        sfSprite_setScale(all->jump->sprite_jump03, all->jump->scalej);
        sfSprite_setPosition(all->jump->sprite_jump03, all->perso->posp);
        counter++;
    }
    return counter;
}

int jump04(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter > 1400) {
        all->perso->posp.y += 1;
        sfRenderWindow_drawSprite(window, all->jump->sprite_jump04, NULL);
        sfSprite_setTexture(all->jump->sprite_jump04, all->jump->texture_jump04, sfFalse);
        sfSprite_setScale(all->jump->sprite_jump04, all->jump->scalej);
        sfSprite_setPosition(all->jump->sprite_jump04, all->perso->posp);
        counter++;
        if (counter >= 1500)
            counter = 0;
    }
    return counter;
}
