/*
** EPITECH PROJECT, 2022
** options.c
** File description:
** options
*/

#include <stdio.h>
#include <stdlib.h>

int sphere(char **argv);
int cylinder(char **argv);
int cone(char **argv);

int error_handling(int argc, char **argv)
{
    if (argc != 9)
        return (84);
    if (atoi(argv[1]) < 1 || atoi(argv[1]) > 3)
        return (84);
    if (argv[1][0] == '3' && (atoi(argv[8]) < 0 || atoi(argv[8]) > 360))
        return (84);
    return (0);
}

int check(int argc, char **argv)
{
    for (int i = 2; i < argc; i++)
        if (argv[i][0] != '0' && argv[i][0] != '1'
        && argv[i][0] != '2' && argv[i][0] != '3'
        && argv[i][0] != '4' && argv[i][0] != '5'
        && argv[i][0] != '6' && argv[i][0] != '7'
        && argv[i][0] != '8' && argv[i][0] != '9'
        && argv[i][0] != '-')
            return (84);
    if (atoi(argv[5]) == 0 && atoi(argv[6]) == 0)
        return (84);
    return (0);
}

int help(void)
{
    printf("USAGE\n");
    printf("    ./104intersection opt xp yp zp xv yv zv p\n");
    printf("\nDESCRIPTION\n");
    printf("    opt             surface option: 1 for a shp\
ere, 2 for a cylinder, 3 for a cone\n");
    printf("    (xp, yp, zp)    coordinates of a point by w\
hich the light ray passes through\n");
    printf("    (xv, yv, zv)    coordinates of a vector par\
allel to the light ray\n");
    printf("    p               parameter: radius of the sp\
here, radius of the cylinder, or\n");
    printf("                    angle formed by the cone an\
d the Z-axis\n");
    return (0);
}

int intersection(char **argv)
{
    if (argv[1][0] == '1')
        sphere(argv);
    if (argv[1][0] == '2')
        cylinder(argv);
    if (argv[1][0] == '3')
        cone(argv);
    return (0);
}
