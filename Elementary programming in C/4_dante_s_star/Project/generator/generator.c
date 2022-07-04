/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** desc
*/

#include "include/include.h"

static void add_complexity2(maze_t *maze, int i, int j)
{
    int random;

    if (maze->map[i][j] == '*' && maze->map[i][j - 1] == 'X'
        && maze->map[i - 1][j] == 'X') {
        random = rand() % 2;
        if (random == 0)
            maze->map[i - 1][j] = '*';
        else
            maze->map[i][j - 1] = '*';
    }
}

void big_generator(maze_t *maze)
{
    time_t t;

    add_walls(maze);
    srand((unsigned) time(&t));
    for (int i = 1; maze->map[i] != NULL; i++)
        for (int j = 1; maze->map[i][j] != '\0'; j++)
            add_complexity2(maze, i, j);
    maze->map[maze->row - 1][maze->col - 1] = '*';
}
