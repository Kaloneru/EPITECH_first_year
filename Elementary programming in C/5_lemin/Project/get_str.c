/*
** EPITECH PROJECT, 2022
** get_str.c
** File description:
** desc
*/

#include "include/lemin.h"
/*
int *get_string(file_t *file, char *node, int *find_all_dest)
{
    int indice_array = 0;

    for (int i = 0; file->directions[i] != NULL; i++) {
        if (get_start_str(file->directions[i], node) == 0) {
            find_all_dest[indice_array] = i;
            indice_array++;
        }
    }
    return find_all_dest;
}
*/
char *get_end_str(char *str, char sep)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str)));

    for (; str[i] != sep; i++);
    i++;
    for (; str[i] != '\0'; i++) {
        str2[j] = str[i];
        j++;
    }
    return str2;
}

char *get_start_str(char *str, char sep)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str)));

    for (; str[i] != sep; i++) {
        str2[j] = str[i];
        j++;
    }
    return str2;
}
