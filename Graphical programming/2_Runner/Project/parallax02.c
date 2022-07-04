/*
** EPITECH PROJECT, 2022
** parallax02.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void parallax01(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax, NULL);
    sfSprite_setTexture(\
        all->parallax->sprite_parallax, \
        all->parallax->texture_parallax, sfFalse);
    sfSprite_setScale(\
        all->parallax->sprite_parallax, all->parallax->scale_pa);
    sfSprite_setPosition(\
        all->parallax->sprite_parallax, all->parallax->pos_pa);
}

void parallax02(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax, NULL);
    sfSprite_setTexture(\
        all->parallax->sprite_parallax, \
        all->parallax->texture_parallax, sfFalse);
    sfSprite_setScale(\
        all->parallax->sprite_parallax, all->parallax->scale_pa);
    sfSprite_setPosition(\
        all->parallax->sprite_parallax, all->parallax->pos_pa_2);
}
	
void parallax03(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(\
        window, all->parallax->sprite_parallax01, NULL);
    sfSprite_setTexture(\
        all->parallax->sprite_parallax01, \
        all->parallax->texture_parallax01, sfFalse);
    sfSprite_setScale(\
        all->parallax->sprite_parallax01, all->parallax->scale_pa01);
    sfSprite_setPosition(\
        all->parallax->sprite_parallax01, all->parallax->pos_pa01);
}
	
void parallax04(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(\
        window, all->parallax->sprite_parallax01, NULL);
    sfSprite_setTexture(\
        all->parallax->sprite_parallax01, \
        all->parallax->texture_parallax01, sfFalse);
    sfSprite_setScale(all->parallax->sprite_parallax01, \
                      all->parallax->scale_pa01);
    sfSprite_setPosition(all->parallax->sprite_parallax01, \
                         all->parallax->pos_pa01_2);
}
	
void parallax05(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax02, NULL);
    sfSprite_setTexture(all->parallax->sprite_parallax02,\
                        all->parallax->texture_parallax02, sfFalse);
    sfSprite_setScale(all->parallax->sprite_parallax02, \
                      all->parallax->scale_par02);
    sfSprite_setPosition(all->parallax->sprite_parallax02, \
                         all->parallax->pos_par02);
}
