/*
** EPITECH PROJECT, 2022
** get_line.c
** File description:
** desc
*/

#include "../include/my_rpg.h"

static int use_get_line(char const *filepath)
{
    FILE *stream;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    ssize_t result = 0;

    stream = fopen(filepath, "r");
    if (stream == NULL)
        return 84;
    while ((nread = getline(&line, &len, stream)) != -1)
        result += nread;
    free(line);
    fclose(stream);
    return result;
}

char *open_and_read(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int buff_size = use_get_line(filepath);
    char *buff = malloc(sizeof(char) * (buff_size + 2));

    read(fd, buff, buff_size);
    buff[buff_size - 1] = '\0';
    close(fd);
    return buff;
}
