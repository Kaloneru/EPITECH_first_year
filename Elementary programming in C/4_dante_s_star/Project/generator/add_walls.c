/*
** EPITECH PROJECT, 2022
** filling_map.c
** File description:
** desc
*/

#include "include/include.h"

static void add_walls3(maze_t *maze, int i, int j)
{
    if (j % 2 != 0)
        maze->map[i][j] = 'X';
}

static void add_walls2(maze_t *maze, int i)
{
    int j = 1;

    if (i % 2 != 0)
        while (maze->map[i][j] != '\0') {
            maze->map[i][j] = 'X';
            j++;
        }
    j = 1;
    if (i % 2 != 1)
        while (maze->map[i][j] != '\0') {
            add_walls3(maze, i, j);
            j++;
        }
}

void add_walls(maze_t *maze)
{
    int i = 0;
    int j = 0;

    while (i != maze->row) {
        while (j != maze->col) {
            maze->map[i][j] = '*';
            j++;
        }
        j = 0;
        maze->map[i][maze->col] = '\0';
        i++;
    }
    i = 1;
    while (maze->map[i] != NULL) {
        add_walls2(maze, i);
        i++;
    }
    maze->map[maze->row - 1][maze->col - 1] = '*';
}
