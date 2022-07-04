/*
** EPITECH PROJECT, 2022
** music.c
** File description:
** runner
*/
#include "include/ouais.h"
#include "include/include.h"

void music(all_t *all)
{
    all->sound->music = sfSound_create();
    all->sound->buff_music = sfSoundBuffer_createFromFile("game.ogg");
    all->sound->jump = sfSound_create();
    all->sound->buff_jump = sfSoundBuffer_createFromFile("jump.ogg");
}

void play_music(all_t *all)
{
    sfSound_setBuffer(all->sound->music, all->sound->buff_music);
    sfSound_setLoop(all->sound->music, sfTrue);
    sfSound_play(all->sound->music);
}
