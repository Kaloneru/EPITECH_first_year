/*
** EPITECH PROJECT, 2022
** mysokoban
** File description:
** open_and_read
*/

#include "include/include.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *open_and_read(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    int ret = stat(filepath, &sb);
    int buff_size = sb.st_size;
    char *buff = malloc(sizeof(char *) * buff_size);

    if (ret == -1)
        return (NULL);
    read(fd, buff, buff_size);
    buff[buff_size] = '\n';
    buff[buff_size + 1] = '\0';
    close(fd);

    return (buff);
}
