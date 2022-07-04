/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** pong's main
*/

#include <stdio.h>
#define STOF(x) str_to_int(x)
int velocity(int ac, char **av);
int coordinate(int ac, char **av);
int angle(int ac, char **av);
int str_to_int(char *str);
int arg(int ac);

int error(char **av)
{
    for (int i = 0; av[7][i] != '\0'; i++) {
        if (av[7][i] == '.' || av[7][i] == '-')
            return (1);
    }
    return (0);
}

int check(char **av, int i)
{
    int j = 0;

    while (av[i][j] != '\0') {
        if (av[i][j] >= '0' && (av[i][j] <= '9' || av[i][j] == '-' || \
                                av[i][j] == '.'))
            return (0);
        j++;
    }
    return (1);
}

int arguments(int ac, char **av)
{
    int i = 0;

    while (i != ac) {
        if (check(av, i) == 1)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            arg(ac);
            return (0);
        } else
            return (84);
    }
    if (ac == 8) {
        if (error(av) == 1)
            return (84);
        if (arguments(ac, av) == 1)
            return (84);
        velocity(ac, av);
        coordinate(ac, av);
        angle(ac, av);
    } else
        return (84);
    return (0);
}
