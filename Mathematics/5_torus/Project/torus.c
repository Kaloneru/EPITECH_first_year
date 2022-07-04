/*
** EPITECH PROJECT, 2022
** torus.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int error(int ac, char **av);

void bisection(char **av)
{
    double fc;
    double fa;
    double a = 0;
    double b = 1;
    double c;
    int n = atoi(av[7]);
    for (int i = 1; i < 100; i++) {
        c = (a + b) / 2;
        if (i <= n)
            printf("x = %.*f\n", i, c);
        else
            printf("x = %.*f\n", n, c);
        fc = atof(av[6]) * pow(c, 4) + atof(av[5]) * pow(c, 3)
        + atof(av[4]) * pow(c, 2) + atof(av[3]) * c + atof(av[2]);
        fa = atof(av[6]) * pow(a, 4) + atof(av[5]) * pow(a, 3)
        + atof(av[4]) * pow(a, 2) + atof(av[3]) * a + atof(av[2]);
        if (fa * fc < 0)
            b = c;
        else
            a = c;
        if (fabs(fc) <= pow(10, -n))
            break;
    }
}

void newton(char **av)
{
    double fxn;
    double dfxn;
    double fxn1;
    double xn = 0.5;
    int n = atoi(av[7]);
    for (int i = 1; i < 100; i++) {
        fxn = atof(av[6]) * pow(xn, 4) + atof(av[5]) * pow(xn, 3)
        + atof(av[4]) * pow(xn, 2) + atof(av[3]) * xn + atof(av[2]);
        dfxn = 4 * atof(av[6]) * pow(xn, 3) + 3 * atof(av[5]) * pow(xn, 2)
        + 2 * atof(av[4]) * xn + atof(av[3]);
        xn = xn - (fxn / dfxn);
        fxn1 = atof(av[6]) * pow(xn, 4) + atof(av[5]) * pow(xn, 3)
        + atof(av[4]) * pow(xn, 2) + atof(av[3]) * xn + atof(av[2]);
        if (i == 1)
            printf("x = %.1f\n", xn);
        printf("x = %.*f\n", n, xn);
        if (fabs(fxn1) <= pow(10, -n))
            break;
    }
}

void secant(char **av)
{
    double x0 = 0;
    double x1 = 1;
    double xn;
    double fx0;
    double fx1;
    int n = atoi(av[7]);
    for (int i = 1; i < 100; i++) {
        fx0 = atof(av[6]) * pow(x0, 4) + atof(av[5]) * pow(x0, 3)
        + atof(av[4]) * pow(x0, 2) + atof(av[3]) * x0 + atof(av[2]);
        fx1 = atof(av[6]) * pow(x1, 4) + atof(av[5]) * pow(x1, 3)
        + atof(av[4]) * pow(x1, 2) + atof(av[3]) * x1 + atof(av[2]);
        xn = x1 - (fx1 * (x1 - x0) / (fx1 - fx0));
        x0 = x1;
        x1 = xn;
        if (i == 1)
            printf("x = %.1f\n", xn);
        else
            printf("x = %.*f\n", n, xn);
        if (fabs(fx1) <= pow(10, -n))
            break;
    }
}

int torus(char **av)
{
    if (atoi(av[1]) == 1)
        bisection(av);
    if (atoi(av[1]) == 2)
        newton(av);
    if (atoi(av[1]) == 3)
        secant(av);
    return (0);
}

int help(void)
{
    printf("USAGE\n");
    printf("    ./105torus opt a0 a1 a2 a3 a4 n\n\n");
    printf("DESCRIPTION\n");
    printf("    opt       method option:\n");
    printf("                  1 for the bisection method\n");
    printf("                  2 for the Newton's method\n");
    printf("                  3 for the secant method\n");
    printf("    a[0-4]    coefficients of the equation\n");
    printf("    n         precision (the application of \
the polynomial to the solution should\
                           be smaller than 10^-n\n");
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    if (error(ac, av) == 1)
        return (84);
    torus(av);
    return (0);
}
