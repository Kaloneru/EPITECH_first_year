/*
** EPITECH PROJECT, 2022
** map.c
** File description:
** runner
*/
#include "include/ouais.h"
#include "include/include.h"

void convert_map(char *src, map_t *map)
{
    map->map = malloc(sizeof(char *) * my_strlen(src));
    int j = 0;
    int k = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        if (j == 0)
            map->map[k] = malloc(sizeof(char) * 7);
        if (src[i] == ' ') {
            j = 0;
            k++;
            continue;
        }
        map->map[k][j] = src[i];
	j++;
    }
}

char *get_map(char const *filepath, map_t *map)
{
    int fd = open(filepath, O_RDONLY);
    int BUFF_SIZE = 29000;
    char buff[BUFF_SIZE + 1];
    struct stat *sb = malloc(sizeof(struct stat));
    int size = stat(filepath, sb);
    size = sb->st_size;
    char *str = malloc(sizeof(char) * size);
    int ret = read(fd, buff, size);
    buff[size + 1] = '\0';
    str = buff;
    map->map = malloc(sizeof(int) * my_strlen(str));
    return str;
}
