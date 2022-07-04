/*
** EPITECH PROJECT, 2022
** peros.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void perso(all_t *all)
{
    all->perso->texture_perso01 = sfTexture_createFromFile(\
            "sprite/sprite01-removebg-preview.png", NULL);
    all->perso->sprite_perso01 = sfSprite_create();
    all->perso->texture_perso02 = sfTexture_createFromFile(\
        "sprite/sprite02-removebg-preview.png", NULL);
    all->perso->sprite_perso02 = sfSprite_create();
    all->perso->texture_perso03 = sfTexture_createFromFile(\
        "sprite/sprite03-removebg-preview.png", NULL);
    all->perso->sprite_perso03 = sfSprite_create();
    all->perso->texture_perso04 = sfTexture_createFromFile(\
        "sprite/sprite04-removebg-preview.png", NULL);
    all->perso->sprite_perso04 = sfSprite_create();
    all->perso->texture_perso05 = sfTexture_createFromFile(\
        "sprite/sprite05-removebg-preview.png", NULL);
    all->perso->sprite_perso05 = sfSprite_create();
    all->perso->texture_perso06 = sfTexture_createFromFile(\
        "sprite/sprite06-removebg-preview.png", NULL);
    all->perso->sprite_perso06 = sfSprite_create();
}

int display_walk(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter < 901) {
        counter = walk1(window, counter, all);
        counter = walk2(window, counter, all);
        counter = walk3(window, counter, all);
        counter = walk4(window, counter, all);
        counter = walk5(window, counter, all);
        counter = walk6(window, counter, all);   
    }
    return counter;
}

void reset_values(all_t *all)
{
    all->perso->posp = (sfVector2f){350, 750};
    all->jump->posj = (sfVector2f){350, 750};
    all->parallax->pos_pa01 = (sfVector2f){0, 0};
    all->parallax->pos_pa01_2 = (sfVector2f){2399, 0};
    all->parallax->pos_par02 = (sfVector2f){0, 300};
    all->parallax->pos_par02_2 = (sfVector2f){3447, 300};
    all->parallax->pos_par03 = (sfVector2f){0, 800};
    all->parallax->pos_par03_2 = (sfVector2f){2229, 800};
    all->obstacle->pos_ob01 = (sfVector2f){2000, 725};
    all->obstacle->pos_ob01_2 = (sfVector2f){4000, 725};
}

int display_perso(sfRenderWindow *window, int counter, all_t *all)
{
    if ((all->perso->posp.x > all->obstacle->pos_ob01.x &&    \
         all->perso->posp.y > all->obstacle->pos_ob01.y) || \
        (all->perso->posp.x > all->obstacle->pos_ob01_2.x && \
         all->perso->posp.y > all->obstacle->pos_ob01_2.y)) {
        all->game->screen = 2;
        counter = 0;
        reset_values(all);
        }
    if (sfMouse_isButtonPressed(sfMouseRight)) {
        play_jump(all);
        counter = 900;
        all->perso->posp.y = 750;
    }
    counter = display_jump(window, counter, all);
    counter = display_walk(window, counter, all);
    return counter;
}
