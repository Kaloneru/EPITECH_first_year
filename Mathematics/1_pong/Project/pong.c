/*
** EPITECH PROJECT, 2021
** pong.c
** File description:
** pong
*/

#include <stdio.h>
#include <math.h>
#define STOI(x) str_to_float(x)
float str_to_float(char *str);
int str_to_int(char *str);

int arg(int ac)
{
    printf("USAGE\n    ./101pong x0 y0 z0 x1 y1 z1 n\n\n");
    printf("DESCRIPTION\n");
    printf("    x0 ball abscissa at time t - 1\n");
    printf("    y0 ball abscissa at time t - 1\n");
    printf("    z0 ball abscissa at time t - 1\n");
    printf("    x1 ball abscissa at time t\n");
    printf("    y1 ball abscissa at time t\n");
    printf("    z1 ball abscissa at time t\n");
    printf("    n  time shift (greater than or equal to zero, integer)\n");
    return (ac);
}

int velocity(int ac, char **av)
{
    float x = STOI(av[4]) - STOI(av[1]);
    float y = STOI(av[5]) - STOI(av[2]);
    float z = STOI(av[6]) - STOI(av[3]);

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
    return (ac);
}

int coordinate(int ac, char **av)
{
    float x = (STOI(av[4]) - STOI(av[1])) * STOI(av[7]) + STOI(av[4]);
    float y = (STOI(av[5]) - STOI(av[2])) * STOI(av[7]) + STOI(av[5]);
    float z = (STOI(av[6]) - STOI(av[3])) * STOI(av[7]) + STOI(av[6]);

    printf("At time t + %s, ball coordinates will be:\n", av[7]);
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
    return (ac);
}

int angle(int ac, char **av)
{
    float za = STOI(av[6]);
    float zc = (STOI(av[6]) - STOI(av[3])) * STOI(av[7]) + STOI(av[6]);
    const float pi = 3.1415926;
    float v = 180 / pi;
    float x = STOI(av[4]) - STOI(av[1]);
    float y = STOI(av[5]) - STOI(av[2]);
    float z = STOI(av[6]) - STOI(av[3]);
    float angle;

    if (za * zc < 0) {
        angle = asin(z / sqrtf(powf(x, 2) + powf(y, 2) + powf(z, 2))) * v;
        if (angle < 0)
            angle = angle * -1;
        printf("The incidence angle is:\n%.2f degrees\n", angle);
    } else if (z == 0 && zc == 0) {
        printf("The incidence angle is:\n0.00 degrees\n");
    } else
        printf("The ball won't reach the paddle.\n");
    return (ac);
}
