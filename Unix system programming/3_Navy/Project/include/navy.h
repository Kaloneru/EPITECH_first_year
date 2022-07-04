/*
** EPITECH PROJECT, 2021
** navy.h
** File description:
** navy include
*/

#ifndef NAVY_H_
    #define NAVY_H_
    #include <stdlib.h>
    #include <stddef.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <signal.h>
    #include <stdio.h>
    #include <time.h>

typedef struct player_s {
    char **map;
    int pid;
    char **enemy;
    int enemy_pid;
    int victory;
} player_t;

typedef struct game_s {
    char *attack;
    int i;
    int connection;
    int ppid;
    int time;
    int hit;
    int miss;
    int end;
} game_t;

char **load_map(char *filepath);
int error_handling(int argc, char **argv);
int help(void);
char **enemy_map(void);
int my_atoi(char *str);
int player_one(player_t *player, char **argv);
int player_two(player_t *player, char **argv);
int display(player_t *player);
void my_handler(int sig, siginfo_t *info, void *);
void my_second_handler(int sig, siginfo_t *info, void *);
int wait(void);
int response(void);
void send_coord(player_t *player, int x, int y);
int start_game_one(player_t *player);
int reset(void);
int init(void);
int start_game_two(player_t *player, char **argv);
char *attack(player_t *player);
char *hit_or_missed(player_t *player, char *atk);
int check(player_t *player);
int my_strlen(char const *str);

#endif
