/*
** EPITECH PROJECT, 2021
** architect.c
** File description:
** 102architect
*/

#include <stdio.h>
#include <math.h>

int str_to_int(char *str);
float str_to_float(char *str);

void help(void)
{
    printf("USAGE\n");
    printf("    ./102architect x y transfo1 arg11");
    printf(" [arg12] [transo2 arg12 [arg22]] ...\n\n");
    printf("DESCRIPTION\n");
    printf("    x   abscissa of the original point\n");
    printf("    y   ordinate of the original point\n\n");
    printf("    transfo arg1 [arg2]\n");
    printf("    -t i j  translation along vector (i, j)\n");
    printf("    -z m n  scaling by factors m (x-axis) and n (y-axis)\n");
    printf("    -r d    rotation centered in 0 by a d degree angle\n");
    printf("    -s d    reflection over the axis passing through 0 ");
    printf("with an inclination\n");
    printf("            angle of d degrees\n");
}

int translation(char **argv)
{
    int i = str_to_int(argv[4]);
    int j = str_to_int(argv[5]);
    float fi = str_to_float(argv[4]);
    float fj = str_to_float(argv[5]);
    float fa = str_to_float(argv[1]);
    float fb = str_to_float(argv[2]);

    printf("Translation along vector (%d, %d)\n", i, j);
    printf("1.00    0.00    %.2f\n", fi);
    printf("0.00    1.00    %.2f\n", fj);
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", fa, fb, fa + fi, fb + fj);
    return (0);
}

int scaling(char **argv)
{
    int m = str_to_int(argv[4]);
    int n = str_to_int(argv[5]);
    float fm = str_to_float(argv[4]);
    float fn = str_to_float(argv[5]);
    float fa = str_to_float(argv[1]);
    float fb = str_to_float(argv[2]);

    printf("Scaling by factors %d and %d\n", m, n);
    printf("%.2f    0.00    0.00\n", fm);
    printf("0.00    %.2f    0.00\n", fn);
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", fa, fb, fa * fm, fb * fn);
    return (0);
}

int rotation(char **argv)
{
    int angle = str_to_int(argv[4]);
    float fa = str_to_float(argv[1]);
    float fb = str_to_float(argv[2]);
    float ra = (cos(angle * M_PI / 180) * fa - (sin(angle * M_PI / 180)) * fb);
    float rb = (sin(angle * M_PI / 180) * fa + (cos(angle * M_PI / 180)) * fb);

    printf("Rotation by a %d degree angle\n", angle);
    printf("%.2f    %.2f    0.00\n", cos(angle * M_PI / 180), - sin(angle * M_PI / 180));
    printf("%.2f    %.2f    0.00\n", sin(angle * M_PI / 180), cos(angle * M_PI / 180));
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", fa, fb, ra, rb);
    return (0);
}

int reflection(char **argv)
{
    int angle = str_to_int(argv[4]);
    float fa = str_to_float(argv[1]);
    float fb = str_to_float(argv[2]);
    float ra = (cos(2 * angle * M_PI / 180) * fa + (sin(2 * angle * M_PI / 180)) * fb);
    float rb = (sin(2 * angle * M_PI / 180) * fa - (cos(2 * angle * M_PI / 180)) * fb);
    
    printf("Reflection over an axis with an inclination angle of %d degrees\n", angle);
    printf("%.2f    %.2f    0.00\n", cos(2 * angle * M_PI / 180), sin(2 * angle * M_PI / 180));
    printf("%.2f    %.2f    0.00\n", sin(2 * angle * M_PI / 180), -cos(2 * angle * M_PI / 180));
    printf("0.00    0.00    1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", fa, fb, ra, rb);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][1] == 'h')
        help();
    if (argc == 6 && argv[3][1] == 't')
        translation(argv);
    if (argc == 6 && argv[3][1] == 'z')
        scaling(argv);
    if (argc == 5 && argv[3][1] == 'r')
        rotation(argv);
    if (argc == 5 && argv[3][1] == 's')
        reflection(argv);
    return (0);
}
