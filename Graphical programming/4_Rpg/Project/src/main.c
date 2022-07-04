/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** my_rpg
*/

#include "../include/my_rpg.h"
#include <stdbool.h>

int main(void)
{
    sfVideoMode video_mode = {1920, 1020, 32};
    all_t *all = malloc(sizeof(all_t));

    malloc_struct(all);
    all->window->clock = sfClock_create();
    all->window->window = sfRenderWindow_create(video_mode, "RPG",
    sfDefaultStyle, NULL);
    sfRenderWindow_setKeyRepeatEnabled(all->window->window, false);
    loop(all);
    sfSound_stop(all->sound->music_jeu);
    sfSoundBuffer_destroy(all->sound->buff_music_jeu);
    sfSound_destroy(all->sound->music_jeu);
    return 0;
}
