/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** load_save
*/

#include "../../include/include.h"

char *load_map(char *filepath)
{
    int result = open(filepath, O_RDONLY);
    char *file = malloc(sizeof(char) * 250);

    read(result, file, 250);
    return file;
}
