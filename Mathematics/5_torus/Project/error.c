/*
** EPITECH PROJECT, 2022
** error.c
** File description:
** error
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int error(int ac, char **av)
{
    if (ac != 8)
        return (1);
    if (atoi(av[1]) != 1 && atoi(av[1]) != 2 && atoi(av[1]) != 3)
        return (1);
    for (int i = 1; i < ac; i++)
        if (av[i][0] != '0' && av[i][0] != '1'
           && av[i][0] != '2' && av[i][0] != '3'
           && av[i][0] != '4' && av[i][0] != '5'
           && av[i][0] != '6' && av[i][0] != '7'
           && av[i][0] != '8' && av[i][0] != '9'
           && av[i][0] != '-')
            return (1);
    return (0);
}
