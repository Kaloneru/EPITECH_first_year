/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main stumper 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void fazzbizz(char *argv1, char *argv2)
{
    int nb_1 = atoi(argv1);
    int nb_2 = atoi(argv2);

    while (nb_1 != nb_2 + 1) {
        if (nb_1 % 10 == 0 && nb_1 % 9 == 0) {
            printf("FazzBizz\n");
            nb_1++;
            continue;
        }
        if (nb_1 % 10 == 0)
            printf("Fazz\n");
        if (nb_1 % 9 == 0)
            printf("Bizz\n");
        if (nb_1 % 10 != 0 && nb_1 % 9 != 0)
            printf("%i\n", nb_1);
        nb_1++;
    }
}

int main(int argc, char **argv)
{
    char *err;

    if (argc < 3)
        return 84;
    err = "Error: the second parameter must be greater than the first one.\n";
    if (atoi(argv[1]) > atoi(argv[2])) {
        write(2, err, 65);
        return 84;
    }
    fazzbizz(argv[1], argv[2]);
    return 0;
}
