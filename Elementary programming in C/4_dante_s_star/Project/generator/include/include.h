/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** desc
*/

#ifndef GENERATOR_H
    #define GENERATOR_H
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

typedef struct maze_s {
    char **map;
    int row;
    int col;
} maze_t;

void big_generator(maze_t *maze);
void add_walls(maze_t *maze);
void malloc_maze(maze_t *maze);
void imperfect(maze_t *maze);
void fill_map(maze_t *maze);
#endif
