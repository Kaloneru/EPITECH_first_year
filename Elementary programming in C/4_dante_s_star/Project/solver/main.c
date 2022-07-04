/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main qui fait rien c juste histoire d'avoir un main'
*/
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

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
    buff[buff_size] = '\0';
    close(fd);
    return (buff);
}

int main(int argc, char **argv)
{
    char *maze;

    if (argc < 2)
        return 84;
    maze = open_and_read(argv[1]);
    if (maze != NULL)
        for (int i = 0; maze[i] != '\0'; i++)
            printf("%c", maze[i]);
    return 0;
}
