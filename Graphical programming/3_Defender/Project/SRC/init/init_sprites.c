/*
** EPITECH PROJECT, 2022
** init_sprites.c
** File description:
** set the sprites
*/

#include "../../include/include.h"

static void init_value(all_t *all)
{
    all->menu->menu1 = 1;
    all->global_values->frame = 60;
    all->global_values->score = 0;
    all->global_values->money = 10;
    all->sound->volume = 5;
}

static void init_malloc(all_t *all)
{
    all->sound->rect_sprite_volume = malloc(sizeof(sfIntRect) * 16);
    all->sprite->sprite_rect = malloc(sizeof(sfIntRect) * 100);
    all->menu->button_rect = malloc(sizeof(sfIntRect) * 100);
    all->map->map_rect = malloc(sizeof(sfIntRect) * 210);
    all->map->tour_rect = malloc(sizeof(sfIntRect) * 6);
    all->map->tour_pos = malloc(sizeof(sfVector2f) * 200);
    all->map->tour_on_rect = malloc(sizeof(int) * 200);
    all->map->type_tour = malloc(sizeof(int) * 200);
    all->enemi->annimation = malloc(sizeof(int) * 50);
}

static void init_all_sprite(all_t *all)
{
    all->sound->sprite_volume = get_sprite
        (sfTexture_createFromFile("sprites/sprite_sheet_volume.png", NULL));
    all->menu->sprite_fond = get_sprite
        (sfTexture_createFromFile("sprites/overwatch.jpg", NULL));
    all->sprite->sprite = get_sprite
        (sfTexture_createFromFile("sprites/ennemi.png", NULL));
    all->menu->button = get_sprite
        (sfTexture_createFromFile("sprites/buttons.png", NULL));
    all->map->build = get_sprite
        (sfTexture_createFromFile("sprites/tour.png", NULL));
    init_background_rect(all);
}

static void mumusiquesique(all_t *all)
{
    play_music_in_loop(all->sound->music_jeu, all->sound->buff_music_jeu);
    sfSound_stop(all->sound->music_jeu);
    play_music_in_loop(all->sound->music_menu, all->sound->buff_music_menu);
}

void init_game(all_t *all)
{
    sfVector2f vector = {2, 2};
    sfVector2f vector2 = {2.5, 2.5};
    sfVector2f vector3 = {0.5, 0.5};
    sfVector2f vector4 = {1, 1};
    init_value(all);
    init_malloc(all);
    init_all_sprite(all);
    init_button_rect(all);
    init_map_rect(all);
    init_tour_rect(all);
    init_sound_rect(all);
    sfSprite_setScale(all->menu->sprite_fond, vector4);
    sfSprite_setScale(all->sprite->sprite, vector);
    sfSprite_setScale(all->menu->button, vector2);
    sfSprite_setScale(all->map->build, vector3);
    init_wave(all);
    init_music(all);
    mumusiquesique(all);
}
