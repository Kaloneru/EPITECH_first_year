/*
** EPITECH PROJECT, 2022
** signals.c
** File description:
** signals
*/

#include "printf.h"
#include "navy.h"

extern game_t *game;

void my_handler(int sig, siginfo_t *info, void *)
{
    game->ppid = info->si_pid;
    if (sig == SIGUSR1 && game->connection == 0)
        game->connection = 1;
    if (sig == SIGUSR1 && game->connection == 1)
        game->attack[game->end]++;
    if (sig == SIGUSR2 && game->end != 2)
        game->end = game->end + 1;
    if (sig == SIGUSR2 && game->end == 2)
        game->time = 1;
}

void my_second_handler(int sig, siginfo_t *info, void *)
{
    if (sig == SIGUSR1)
        game->hit = 1;
    if (sig == SIGUSR2)
        game->miss = 1;
}

int wait(void)
{
    game->time = 0;
    struct sigaction act;
    sigset_t mask;

    sigemptyset(&mask);
    act.sa_flags = SA_SIGINFO;
    act.sa_mask = mask;
    act.sa_sigaction = my_handler;
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    while (game->time == 0)
        usleep(1000);
    return (0);
}

int response(void)
{
    struct sigaction act;
    sigset_t mask;

    sigemptyset(&mask);
    act.sa_flags = SA_SIGINFO;
    act.sa_mask = mask;
    act.sa_sigaction = my_second_handler;
    sigaction(SIGUSR1, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);
    while (game->hit == 0 && game->miss == 0)
        usleep(1000);
    return (0);
}
