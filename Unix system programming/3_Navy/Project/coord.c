/*
** EPITECH PROJECT, 2021
** coord.c
** File description:
** ouais
*/

#include "printf.h"
#include "navy.h"

extern game_t *game;

void send_coord(player_t *player, int x, int y)
{
    while (x != 0) {
        kill(player->enemy_pid, SIGUSR1);
        usleep(1000);
        x -= 1;
    }
    kill(player->enemy_pid, SIGUSR2);
    while (y != 0) {
        kill(player->enemy_pid, SIGUSR1);
        usleep(1000);
        y -= 1;
    }
    kill(player->enemy_pid, SIGUSR2);
}
