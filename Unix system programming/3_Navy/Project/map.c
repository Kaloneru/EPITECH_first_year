/*
** EPITECH PROJECT, 2021
** map.c
** File description:
** map
*/

#include "printf.h"
#include "navy.h"

char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i = i + 1;
    }
    return (arr);
}

void conditions(int *start, int *end)
{
    if (start[0] < end[0])
        start[0]++;
    else
        start[1]++;
}

char **load_boats(char **map, char *boats)
{
    int boats_count = 0;
    char size;
    int start[2];
    int end[2];
    int x = 0;

    while (boats_count != 4) {
        size = boats[0 + x];
        start[0] = boats[2 + x] - 65;
        end[0] = boats[5 + x] - 65;
        start[1] = boats[3 + x] - 49;
        end[1] = boats[6 + x] - 49;
        map[start[1]][start[0]] = size;
        while (start[0] <= end[0] && start[1] <= end[1]) {
            map[start[1]][start[0]] = size;
            conditions(start, end);
        }
        x = x + 8;
        boats_count++;
    }
    return (map);
}

char **load_map(char *filepath)
{
    char **map = mem_alloc_2d_char_array(8, 8);
    char *boats = malloc(sizeof(char) * 33);
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return (NULL);
    read(fd, boats, 33);
    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            map[i][j] = '.';
    map = load_boats(map, boats);
    return (map);
}

char **enemy_map(void)
{
    char **map = mem_alloc_2d_char_array(8, 8);

    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            map[i][j] = '.';
    return (map);
}
