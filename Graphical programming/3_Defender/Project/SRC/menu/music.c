/*
** EPITECH PROJECT, 2022
** music.c
** File description:
** play music and sounds
*/
#include "../../include/include.h"

void init_music(all_t *all)
{
    all->sound->music_jeu = sfSound_create();
    all->sound->buff_music_jeu =
        sfSoundBuffer_createFromFile("sounds/smash-mouth-all-star-hq.ogg");
    all->sound->music_menu = sfSound_create();
    all->sound->buff_music_menu =
        sfSoundBuffer_createFromFile("sounds/game.ogg");
    all->sound->sound = sfSound_create();
    all->sound->buff_sound =
        sfSoundBuffer_createFromFile("sounds/jump.ogg");
    sfSound_setVolume(all->sound->music_menu, 50);
    sfSound_setVolume(all->sound->music_jeu, 50);
    sfSound_setVolume(all->sound->sound, 50);
}

void close_music(all_t *all)
{
    if (all->menu->menu1 == 10)
        sfSound_stop(all->sound->music_jeu);
    else
        sfSound_stop(all->sound->music_menu);
    sfSoundBuffer_destroy(all->sound->buff_music_jeu);
    sfSoundBuffer_destroy(all->sound->buff_music_menu);
    sfSoundBuffer_destroy(all->sound->buff_sound);
}

void play_music_in_loop(sfSound *sound, sfSoundBuffer *buffer)
{
    sfSound_setBuffer(sound, buffer);
    sfSound_setLoop(sound, sfTrue);
    sfSound_play(sound);
}

void play_sound(sfSound *sound, sfSoundBuffer *buffer)
{
    sfSound_setBuffer(sound, buffer);
    sfSound_play(sound);
}
