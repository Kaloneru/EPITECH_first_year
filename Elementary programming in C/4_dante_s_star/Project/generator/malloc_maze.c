/*
** EPITECH PROJECT, 2022
** malloc_maze.c
** File description:
** malloc a char ** for the maze
*/
#include "include/include.h"

void malloc_maze(maze_t *maze)
{
    int row = maze->row;
    int col = maze->col;

    maze->map = malloc(sizeof(char *) * (row + 1));
    for (int i = 0; i != row; i++)
        maze->map[i] = malloc(sizeof(char) * (col + 1));
    maze->map[row] = NULL;
}
