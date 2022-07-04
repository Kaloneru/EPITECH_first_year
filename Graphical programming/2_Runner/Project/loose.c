/*
** EPITECH PROJECT, 2022
** loose.c
** File description:
** runner
*/
//#include "include/include"
#include "include/ouais.h"

void perso_death(all_t *all)
{
    all->death->texture_death01 = sfTexture_createFromFile(\
    "sprite/dead01.png", NULL);
    all->death->sprite_death01 = sfSprite_create();
    all->death->texture_death02 = sfTexture_createFromFile(\
    "sprite/dead02.png", NULL);
    all->death->sprite_death02 = sfSprite_create();
    all->death->texture_death03 = sfTexture_createFromFile(\
    "sprite/dead03.png", NULL);
    all->death->sprite_death03 = sfSprite_create();
    all->death->texture_death04 = sfTexture_createFromFile(\
    "sprite/dead04.png", NULL);
    all->death->sprite_death04 = sfSprite_create();
    all->death->texture_death05 = sfTexture_createFromFile(\
    "sprite/dead05.png", NULL);
    all->death->sprite_death05 = sfSprite_create();
    all->death->texture_death06 = sfTexture_createFromFile(\
    "sprite/dead06.png", NULL);
    all->death->sprite_death06 = sfSprite_create();
}

int display_death2(all_t *all, int counter, sfRenderWindow *window)
{
    counter = display_death03(all, counter, window);
    counter = display_death04(all, counter, window);
    counter = display_death05(all, counter, window);
    counter = display_death06(all, counter, window);
    counter = display_death07(all, counter, window);
    counter = display_death08(all, counter, window);
    return counter;
}


int display_death(sfRenderWindow *window, int counter, all_t *all\
, map_t *map)
{
    parallax_if(all);
    display_parallax(window, all);
    obstacle_if(all, map);
    display_obstacle_inf(window, all);
    counter = display_death2(all, counter, window);
    if (counter == 301) {
        reset_values(all);
        counter = 0;
        all->game->screen = 3;
        }
    return counter;
}

void game_over(all_t *all)
{
    all->game->texture_game_over = sfTexture_createFromFile(\
    "sprite/game_over.png", NULL);
    all->game->sprite_game_over = sfSprite_create();
}

int display_game_over(all_t *all, int counter, sfRenderWindow *window)
{
    if (counter >= 0) {
        sfRenderWindow_drawSprite(window, all->game->sprite_game_over,\
         NULL);
        sfSprite_setTexture(all->game->sprite_game_over, \
        all->game->texture_game_over, sfFalse);
        sfSprite_setScale(all->game->sprite_game_over,\
         all->game->scalego);
        sfSprite_setPosition(all->game->sprite_game_over, \
        all->game->pos_go);
        counter++;
    }
    if (counter == 2000)
        all->game->screen = 0;
    return counter;
}
