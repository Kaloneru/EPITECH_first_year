/*
** EPITECH PROJECT, 2022
** second_player.c
** File description:
** player two
*/

#include "printf.h"
#include "navy.h"

extern game_t *game;

int change_two(player_t *player)
{
    if (player->map[game->attack[1] - 49][game->attack[0] - 65] != 'x'
    && player->map[game->attack[1] - 49][game->attack[0] - 65] != 'o'
    && player->map[game->attack[1] - 49][game->attack[0] - 65] != '.') {
        kill(player->enemy_pid, SIGUSR1);
        my_printf("%c%c: hit\n\n", game->attack[0], game->attack[1]);
        player->map[game->attack[1] - 49][game->attack[0] - 65] = 'x';
    } else {
        kill(player->enemy_pid, SIGUSR2);
        my_printf("%c%c: missed\n\n", game->attack[0], game->attack[1]);
        player->map[game->attack[1] - 49][game->attack[0] - 65] = 'o';
    }
    return (0);
}

int two_play(player_t *player)
{
    char *atk;

    reset();
    display(player);
    my_printf("waiting for enemy's attack...\n");
    wait();
    change_two(player);
    if (player->victory == 14)
        return (0);
    game->time = 0;
    game->end = 0;
    reset();
    atk = attack(player);
    response();
    my_printf("%c%c: %s\n\n", atk[0], atk[1], hit_or_missed(player, atk));
    return (1);
}

int start_game_two(player_t *player, char **argv)
{
    my_printf("my_pid: %d\n", player->pid);
    my_printf("successfully connected\n\n");
    player->enemy_pid = my_atoi(argv[1]);
    kill(player->enemy_pid, SIGUSR1);
    while (player->victory != 14 && check(player) != 14)
        if (two_play(player) == 0)
            break;
    if (player->victory == 14)
        return (0);
    if (player->victory != 14)
        return (1);
}
