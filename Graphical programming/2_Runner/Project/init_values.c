/*
** EPITECH PROJECT, 2022
** init_values.c
** File description:
** runner
*/
#include "include/ouais.h"

void pos_and_scale(all_t *all)
{
    all->menu->pos_menu =(sfVector2f){0, 0};
    all->menu->scale_menu =(sfVector2f){2.4, 1.8};
    all->perso->posp = (sfVector2f){350, 750};
    all->perso->scalep = (sfVector2f){3, 3};
    all->jump->posj = (sfVector2f){350, 750};
    all->jump->scalej01 = (sfVector2f){3, 3};
    all->jump->scalej = (sfVector2f){3, 3};
    all->parallax->pos_pa = (sfVector2f){2232, 0};
    all->parallax->pos_pa_2 = (sfVector2f){0, 0};
    all->parallax->pos_pa01 = (sfVector2f){0, 0};
    all->parallax->pos_pa01_2 = (sfVector2f){2399, 0};
    all->parallax->pos_par02 = (sfVector2f){0, 300};
    all->parallax->pos_par02_2 = (sfVector2f){3447, 300};
    all->parallax->pos_par03 = (sfVector2f){0, 800};
    all->parallax->pos_par03_2 = (sfVector2f){2229, 800};
    all->parallax->scale_pa = (sfVector2f){2, 2};
    all->parallax->scale_pa01 = (sfVector2f){4, 4};
    all->parallax->scale_par02 = (sfVector2f){1, 1};
    all->parallax->scale_par03 = (sfVector2f){3, 3};
}

void pos_and_scale2(all_t *all, map_t *map)
{
    all->obstacle->scale_ob01 = (sfVector2f){3, 3};
    all->obstacle->pos_ob01 = (sfVector2f){my_atoi(map->map[0]), 725};
    all->obstacle->pos_ob01_2 = \
        (sfVector2f){my_atoi(map->map[1]), 725};
    all->death->posd = (sfVector2f){350, 750};
    all->death->scaled = (sfVector2f){1, 1};
    all->game->pos_wi = (sfVector2f){0, 0};
    all->game->scalewi = (sfVector2f){1, 1};
    all->game->pos_go = (sfVector2f){0, 0};
    all->game->scalego = (sfVector2f){1, 1};
}

void star_malloque(all_t *all)
{
    all->menu = malloc(sizeof(menu_t));
    all->perso = malloc(sizeof(perso_t));
    all->jump = malloc(sizeof(jump_t));
    all->parallax = malloc(sizeof(parallax_t));
    all->obstacle = malloc(sizeof(obstacle_t));
    all->game = malloc(sizeof(game_t));
    all->sound = malloc(sizeof(sound_t));
    all->death = malloc(sizeof(death_t));
}

void set_sprite(all_t *all)
{
    win(all);
    perso(all);
    perso_jump(all);
    perso_death(all);
    parallax(all);
    obstacle(all);
    music(all);
    game_over(all);
    play_music(all);
}

void score(all_t *all)
{
    sfVector2f pos_text = (sfVector2f){1000, 0};

    all->font = sfFont_createFromFile("arial.ttf");
    all->text = sfText_create();
    sfText_setFont(all->text, all->font);
    sfText_setPosition(all->text, pos_text);
    sfText_setCharacterSize(all->text, 50);
}

void set_values(all_t *all, map_t *map)
{
    score(all);
    map->i_map = 2;
    star_malloque(all);
    pos_and_scale(all);
    pos_and_scale2(all, map);
    all->game->screen = 0;
    set_sprite(all);
}
