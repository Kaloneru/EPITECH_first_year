/*
** EPITECH PROJECT, 2022
** let_me_innn
** File description:
** init_nodes.c
*/
#include "lemin.h"

int len_name_max(infos_t *infos)
{
    int len = 0;
    int i = 0;

    while (infos->name[i] != '\0') {
        if (my_strlen(infos[i].name) > len)
            len = my_strlen(infos[i].name);
        i++;
    }
    return len;
}

int get_index_name(infos_t *infos, char *name)
{
    int i = 0;

    for (; infos[i].name != NULL; i++) {
        if (my_strcmp(infos[i].name, name) == 0)
            return i;
    }
    return -1;
}

int find_all_dest(file_t *file, infos_t *info, int j)
{
    int i = 0;
    int indice_array = 0;
    printf("\n\n");

    while (file->directions[i] != NULL) {
        if (my_strstr(file->directions[i], my_strcat(info[j].name, "-")) == 0) {
            printf("chibre\n");
            info[j].dest[indice_array] = get_index_name(info, get_end_str(file->directions[i], '-'));
            indice_array++;
        }
        i++;
    }
    printf("dest = %d %d %d %d\n", info[j].dest[0], info[j].dest[1], info[j].dest[2], info[j].dest[3]);
    return 0;
}

int find_all_src(file_t *file, infos_t *info, int j)
{
    int i = 0;
    int indice_array = 0;

    while (file->directions[i] != NULL) {
        if (my_strstr(file->directions[i], my_strcat(info[j].name, "-")) == 0) {
            printf("chibre\n");
            info[j].src[indice_array] = get_index_name(info, get_start_str(file->directions[i], '-'));
            indice_array++;
        }
        i++;
    }
    printf("src = %d %d %d %d\n", info[j].src[0], info[j].src[1], info[j].src[2], info[j].src[3]);
    return 0;
}

int init_dests(infos_t *infos, file_t *files)
{
    treat_the_direction(files);
    int nb = files->nb_node;;
    int truc = 0;

    for (; infos[truc].name != NULL; truc++) { 
        infos[truc].dest = malloc(sizeof(int) * nb);
        infos[truc].src = malloc(sizeof(int) * nb);
        find_all_dest(files, infos, truc);
        find_all_src(files, infos, truc);
    }
    return 0;
}
