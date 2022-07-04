/*
** EPITECH PROJECT, 2022
** jump.c
** File description:
** runner
*/
#include "include/ouais.h"

void perso_jump(all_t *all)
{
    all->jump->texture_jump01 = sfTexture_createFromFile("sprite/perso_jump01.png", NULL);
    all->jump->sprite_jump01 = sfSprite_create();
    all->jump->texture_jump02 = sfTexture_createFromFile("sprite/perso_jump02.png", NULL);
    all->jump->sprite_jump02 = sfSprite_create();
    all->jump->texture_jump03 = sfTexture_createFromFile("sprite/perso_jump03.png", NULL);
    all->jump->sprite_jump03 = sfSprite_create();
    all->jump->texture_jump04 = sfTexture_createFromFile("sprite/perso_jump04.png", NULL);
    all->jump->sprite_jump04 = sfSprite_create();
}

void play_jump(all_t *all)
{
    sfSound_setBuffer(all->sound->jump, all->sound->buff_jump);
    sfSound_play(all->sound->jump);
}

int display_jump(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter >= 901) {
        counter = jump01(window, counter, all);
        counter = jump02(window, counter, all);
        counter = jump03(window, counter, all);
        counter = jump04(window, counter, all);
    }
    return counter;
}
