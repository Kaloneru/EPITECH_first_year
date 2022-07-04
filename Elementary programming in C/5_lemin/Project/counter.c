/*
** EPITECH PROJECT, 2022
** counter.c
** File description:
** desc
*/

#include "lemin.h"

int count_dest(file_t *file, char *name_of_the_node)
{
    int count = 0;
    int i = 0;

    while (file->directions[i] != NULL) {
        if (my_strstr(my_strcat(file->directions[i], "-"), name_of_the_node) == 0)
            count++;
        i++;
    }
    return count;
}

int count_src(file_t *file, char *name_of_the_node)
{
    int count = 0;
    int i = 0;

    while (file->directions[i] != NULL)
        if (my_strstr(my_strcat(file->directions[i], "-"), name_of_the_node) == 1)
            count++;
    i++;
    return count;
}
