/*
** EPITECH PROJECT, 2022
** open_and_read.c
** File description:
** take a filepath and return the buffer make sure you can use open read and statq
*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

char *open_and_read(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    int ret = stat(filepath, &sb);
    int buff_size = sb.st_size;
    char *buff = malloc(sizeof(char *) * buff_size);;

    if (ret == -1)
        return (NULL);
    read(fd, buff, buff_size);
    buff[buff_size - 1] = '\0';
    close(fd);
    return (buff);
}
