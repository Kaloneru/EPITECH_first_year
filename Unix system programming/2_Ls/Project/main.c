/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** my_ls
*/
#include "include.h"

char *check_arg(int argc, char **argv)
{
    char *str;
    if (argc == 1)
        return "./";
    if (argc == 2)
        return "./";
    str = malloc(sizeof(char) * my_strlen(argv[2]) + 2);
    if (argc > 2)
        if (argv[2][my_strlen(argv[2]) - 1] == '/')
            str = my_strcat(argv[2], "./");
    return str;
}

int main(int argc, char **argv)
{
    DIR *d;
    struct dirent *pDirent;
    char *str = check_arg(argc, argv);

    if (argc == 1) {
        ls(opendir(str));
        return 0;
    }
    if (argv[1][my_strlen(argv[1] - 1)] != '/')
        ls(opendir(str));
    if (my_strcmp(argv[1], "-a") == 0)
        lsa(opendir(str));
    if (my_strcmp(argv[1], "-l") == 0)
        lsl(opendir(str), str);
    return 0;
}
