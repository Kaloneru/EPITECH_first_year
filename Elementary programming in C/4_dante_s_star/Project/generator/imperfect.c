/*
** EPITECH PROJECT, 2022
** imperfect.c
** File description:
** desc
*/

#include "include/include.h"

static void imperfect2(maze_t *maze, int i, int j)
{
    int random;

    if (maze->map[i][j] == 'X') {
        random = rand() % 5;
        if (random == 1)
            maze->map[i][j] = '*';
    }
}

void imperfect(maze_t *maze)
{
    int i = 1;
    int j = 1;

    while (maze->map[i] != NULL) {
        while (maze->map[i][j] != '\0') {
            imperfect2(maze, i, j);
            j++;
        }
        i++;
    }
}
