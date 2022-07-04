/*
** EPITECH PROJECT, 2022
** parallax.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void parallax(all_t *all)
{
    all->parallax->texture_parallax = \
        sfTexture_createFromFile("sprite/parallax.png", NULL);
    all->parallax->sprite_parallax = sfSprite_create();
    all->parallax->texture_parallax01 = \
        sfTexture_createFromFile(\
            "sprite/first_backgroud_parallax.png", NULL);
    all->parallax->sprite_parallax01 = sfSprite_create();
    all->parallax->texture_parallax02 = \
        sfTexture_createFromFile(\
            "sprite/second_backgroud_parallax.png", NULL);
    all->parallax->sprite_parallax02 = sfSprite_create();
    all->parallax->texture_parallax03 = \
        sfTexture_createFromFile(\
            "sprite/third_backgroud_parallax.png", NULL);
    all->parallax->sprite_parallax03 = sfSprite_create();
}

void parallax_if(all_t *all)
{
    parallax_if01(all);
    parallax_if02(all);
}

void display_parallax(sfRenderWindow *window, all_t *all)
{
    parallax01(window, all);
    parallax02(window, all);
    parallax03(window, all);
    parallax04(window, all);
    parallax05(window, all);
    parallax06(window, all);
    parallax07(window, all);
    parallax08(window, all);
}
