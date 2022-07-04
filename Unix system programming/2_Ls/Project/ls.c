/*
** EPITECH PROJECT, 2021
** ls.c
** File description:
** boostrap ls
*/
#include "include.h"

int my_strcmp(const char *str1, const char *str2);

int lsa(DIR *d)
{
    struct dirent *pDirent;

    while ((pDirent = readdir(d)) != NULL) {
        printf("%s  ", pDirent->d_name);
    }
    closedir (d);
    return 0;
}


int ls(DIR *d)
{
    struct dirent *pDirent;

    while ((pDirent = readdir(d)) != NULL) {
        if (pDirent->d_name[0] != '.')
            printf("%s  ", pDirent->d_name);
    }
    closedir (d);
    return 0;
}
