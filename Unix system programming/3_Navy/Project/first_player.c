/*
** EPITECH PROJECT, 2022
** first_player.c
** File description:
** player one
*/

#include "printf.h"
#include "navy.h"

extern game_t *game;

int change_one(player_t *player)
{
    if (player->map[game->attack[1] - 49][game->attack[0] - 65] != 'x'
    && player->map[game->attack[1] - 49][game->attack[0] - 65] != 'o'
    && player->map[game->attack[1] - 49][game->attack[0] - 65] != '.') {
        usleep(1000);
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

int one_play(player_t *player)
{
    char *atk;

    reset();
    display(player);
    atk = attack(player);
    response();
    my_printf("%c%c: %s\n\n", atk[0], atk[1], hit_or_missed(player, atk));
    if (player->victory == 14)
        return (0);
    my_printf("waiting for enemy's attack...\n");
    reset();
    wait();
    change_one(player);
    game->time = 0;
    game->end = 0;
    return (1);
}

int start_game_one(player_t *player)
{
    struct sigaction act;
    sigset_t mask;
    game->attack = malloc(sizeof(char) * 17);
    game->i = 0;
    my_printf("my_pid: %d\n", player->pid);
    my_printf("waiting for enemy connection...\n");
    sigemptyset(&mask);
    act.sa_flags = SA_SIGINFO;
    act.sa_mask = mask;
    act.sa_sigaction = my_handler;
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    while (game->connection == 0)
        usleep(1000);
    my_printf("\nenemy connected\n\n");
    player->enemy_pid = game->ppid;
    while (player->victory != 14 && check(player) != 14)
        if (one_play(player) == 0)
            break;
    return ((player->victory == 14 ? 0 : 1));
}
