/*
** EPITECH PROJECT, 2021
** setup.c
** File description:
** setup
*/

#include "printf.h"
#include "navy.h"

extern game_t *game;

int player_one(player_t *player, char **argv)
{
    player->map = load_map(argv[1]);
    if (player->map == NULL)
        return (84);
    player->pid = getpid();
    player->enemy = enemy_map();
    return (0);
}

int player_two(player_t *player, char **argv)
{
    player->map = load_map(argv[2]);
    if (player->map == NULL)
        return (84);
    player->pid = getpid();
    player->enemy = enemy_map();
    return (0);
}

int reset(void)
{
    game->attack[0] = 'A';
    game->attack[1] = '0';
    game->hit = 0;
    game->miss = 0;
    return (0);
}

int init(void)
{
    game->connection = 0;
    game->attack = malloc(sizeof(char) * 4);
    game->time = 0;
    game->attack[0] = 'A';
    game->attack[0] = '0';
    game->attack[0] = '0';
    game->hit = 0;
    game->miss = 0;
    return (0);
}
