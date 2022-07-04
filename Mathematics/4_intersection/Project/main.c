/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int error_handling(int argc, char **argv);
int check(int argc, char **argv);
int help(void);
int intersection(char **argv);

int calculus(double a, double b, double delta, char **argv)
{
    double xo = -b / (2 * a);
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta > 0) {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", atof(argv[2]) + (x1 * atof(argv[5])),
        atof(argv[3]) + (x1 * atof(argv[6])),
        atof(argv[4]) + (x1 * atof(argv[7])));
        printf("(%.3f, %.3f, %.3f)\n", atof(argv[2]) + (x2 * atof(argv[5])),
        atof(argv[3]) + (x2 * atof(argv[6])),
        atof(argv[4]) + (x2 * atof(argv[7])));
    } if (delta == 0) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", atof(argv[2]) + (xo * atof(argv[5])),
        atof(argv[3]) + (xo * atof(argv[6])),
        atof(argv[4]) + (xo * atof(argv[7])));
    } if (delta < 0)
        printf("No intersection point.\n");
    return (0);
}

int sphere(char **argv)
{
    int a = pow(atoi(argv[5]), 2) + pow(atoi(argv[6]), 2)
    + pow(atoi(argv[7]), 2);
    int b = (atoi(argv[2]) * atoi(argv[5]) * 2)
    + (atoi(argv[3]) * atoi(argv[6]) * 2)
    + (atoi(argv[4]) * atoi(argv[7]) * 2);
    int c = pow(atoi(argv[2]), 2) + pow(atoi(argv[3]), 2)
    + pow(atoi(argv[4]), 2)
    - pow(atoi(argv[8]), 2);
    int delta = pow(b, 2) - (4 * a * c);

    printf("Sphere of radius %d\n", atoi(argv[8]));
    printf("Line passing through the point (%d,\
 %d, %d) and parallel to the vector (%d, %d, %d\
)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4\
]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
    calculus(a, b, delta, argv);
    return (0);
}

int cylinder(char **argv)
{
    int a = pow(atoi(argv[5]), 2) + pow(atoi(argv[6]), 2);
    int b = (atoi(argv[2]) * atoi(argv[5]) * 2)
    + (atoi(argv[3]) * atoi(argv[6]) * 2);
    int c = pow(atoi(argv[2]), 2) +
    pow(atoi(argv[3]), 2) - pow(atoi(argv[8]), 2);
    int delta = pow(b, 2) - (4 * a * c);

    printf("Cylinder of radius %d\n", atoi(argv[8]));
    printf("Line passing through the point (%d,\
 %d, %d) and parallel to the vector (%d, %d, %d\
)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4\
]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
    calculus(a, b, delta, argv);
    return (0);
}

int cone(char **argv)
{
    double angle = (atof(argv[8]) * M_PI) / 180;
    double a = pow(atof(argv[5]), 2) + pow(atof(argv[6]), 2)
    - (pow(atof(argv[7]), 2) / pow(tan(angle), 2));
    double b = (atof(argv[2]) * atof(argv[5]) * 2)
    + (atof(argv[3]) * atof(argv[6]) * 2)
    - ((atof(argv[4]) * atof(argv[7]) * 2) / pow(tan(angle), 2));
    double c = pow(atof(argv[2]), 2) + pow(atof(argv[3]), 2)
    - (pow(atof(argv[4]), 2) / pow(tan(angle), 2));
    double delta = pow(b, 2) - (4 * a * c);

    printf("Cone with a %d degree angle\n", atoi(argv[8]));
    printf("Line passing through the point (%d,\
 %d, %d) and parallel to the vector (%d, %d, %d\
)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4\
]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
    calculus(a, b, delta, argv);
    return (0);
}

int main(int argc, char **argv)
{
    if (check(argc, argv) == 84 || error_handling(argc, argv) == 84)
        return (84);
    if (argv[1][0] == '-' && argv[1][1] == 'h')
        help();
    else
        intersection(argv);
    return (0);
}
