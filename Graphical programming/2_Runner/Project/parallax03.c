/*
** EPITECH PROJECT, 2022
** parallax03.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void parallax06(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax02, NULL);
    sfSprite_setTexture(all->parallax->sprite_parallax02, \
                        all->parallax->texture_parallax02, sfFalse);
    sfSprite_setScale(all->parallax->sprite_parallax02,\
                      all->parallax->scale_par02);
    sfSprite_setPosition(all->parallax->sprite_parallax02, \
                         all->parallax->pos_par02_2);
}
	
void parallax07(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax03, NULL);
    sfSprite_setTexture(all->parallax->sprite_parallax03,\
                        all->parallax->texture_parallax03, sfFalse);
    sfSprite_setScale(all->parallax->sprite_parallax03, \
                      all->parallax->scale_par03);
    sfSprite_setPosition(all->parallax->sprite_parallax03,\
                         all->parallax->pos_par03);
}
	
void parallax08(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window, \
                              all->parallax->sprite_parallax03, NULL);
    sfSprite_setTexture(all->parallax->sprite_parallax03, \
                        all->parallax->texture_parallax03, sfFalse);
    sfSprite_setScale(all->parallax->sprite_parallax03, \
                      all->parallax->scale_par03);
    sfSprite_setPosition(all->parallax->sprite_parallax03, \
                         all->parallax->pos_par03_2);
}
	
void parallax_if01(all_t *all)
{
    all->parallax->pos_pa.x -= 0.2;
    if (all->parallax->pos_pa.x <= -2232)
        all->parallax->pos_pa.x = 2232;
    all->parallax->pos_pa_2.x -= 0.2;
    if (all->parallax->pos_pa_2.x <= -2232)
        all->parallax->pos_pa_2.x = 2232;
    
    all->parallax->pos_pa01.x -= 0.5;
    if (all->parallax->pos_pa01.x == -2400)
        all->parallax->pos_pa01.x = 2399;
    all->parallax->pos_pa01_2.x -= 0.5;
    if (all->parallax->pos_pa01_2.x == -2400)
        all->parallax->pos_pa01_2.x = 2399;
}
	
void parallax_if02(all_t *all)
{
    all->parallax->pos_par02.x -= 1;
    if (all->parallax->pos_par02.x == -3448)
        all->parallax->pos_par02.x = 3447;
    all->parallax->pos_par02_2.x -=1;
    if (all->parallax->pos_par02_2.x == -3448)
        all->parallax->pos_par02_2.x = 3447;
    
    all->parallax->pos_par02.x -= 1;
    if (all->parallax->pos_par02.x == -3448)
        all->parallax->pos_par02.x = 3447;
    all->parallax->pos_par02_2.x -=1;
    if (all->parallax->pos_par02_2.x == -3448)
        all->parallax->pos_par02_2.x = 3447;

    all->parallax->pos_par03.x -= 2;
    if (all->parallax->pos_par03.x <= -2229)
        all->parallax->pos_par03.x = 2228;
    all->parallax->pos_par03_2.x -= 2;
    if (all->parallax->pos_par03_2.x <= -2229)
        all->parallax->pos_par03_2.x = 2228;
}
