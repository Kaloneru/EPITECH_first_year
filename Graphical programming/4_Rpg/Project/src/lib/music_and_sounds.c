/*
** EPITECH PROJECT, 2022
** music_and_sounds.c
** File description:
** all fonctions use to deal with the sounds
*/

#include "../../include/my_rpg.h"

int set_volume(all_t *all, int volume)
{
    sfSound_setVolume(all->sound->music_menu, volume);
    return 0;
}

void init_music(all_t *all)
{
    all->sound->music_jeu = sfSound_create();
    all->sound->buff_music_jeu =
    sfSoundBuffer_createFromFile("res/ogg/main_sound.ogg");
    sfSound_setVolume(all->sound->music_jeu, 50);
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
