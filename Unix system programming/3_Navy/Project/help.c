/*
** EPITECH PROJECT, 2021
** help.c
** File description:
** help
*/

#include "printf.h"
#include "navy.h"

int error_handling(int argc, char **argv)
{
    int fd;
    char *boats = malloc(sizeof(char) * 33);
    int ret;
    if (argc == 1 || argc > 3)
        return (1);
    if (argc == 2) {
        fd = open(argv[1], O_RDONLY);
        ret = read(fd, boats, 33);
        if (fd == -1 || ret == -1 || my_strlen(boats) < 31
        || my_strlen(boats) > 32)
            return (1);
    }
    if (argc == 3) {
        fd = open(argv[2], O_RDONLY);
        ret = read(fd, boats, 33);
        if (fd == -1 || ret == -1 || my_strlen(boats) < 31
        || my_strlen(boats) > 32)
            return (1);
    }
    return (0);
}

int help(void)
{
    my_printf("USAGE\n");
    my_printf("     ./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n");
    my_printf("     first_player_pid: only for the 3nd player. \
pid of the first player\n");
    my_printf("     navy_positions: file representing the posit\
ions of the ships\n");
    return (0);
}
