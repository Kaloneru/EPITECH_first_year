/*
** EPITECH PROJECT, 2022
** movement.c
** File description:
** desc
*/
#include "include/lemin.h"

void treat_the_direction(file_t *file)
{
    int i = 0;

    while (file->directions[i] != NULL) {
        if (my_strstr(file->directions[i], "-") != 0)
            file->directions[i] = get_end_str(file->directions[i], '-');
        if (count_dest(file, file->directions[i]) == 0) {
            file->directions[i] = get_end_str(file->directions[i], '-');
            return;
        }
        if (count_dest(file, file->directions[i]) == 1)
            return;
        i++;
    }
}

void fais_avancer_fourmies(infos_t *infos, file_t *file)
{
    for (int i = 0; infos[1].src[i] != -1; i++) {
        printf("%d\n", infos[1].src[i]);
        if (infos[infos[1].src[i]].ant_on_node == true) {
            infos[1].nb_fourmi_on_node++;
            infos[infos[1].src[i]].ant_on_node = false;
            my_printf("%s->%s\n", infos[i].name, infos[1].name);
        }
    }
    for (int i = 0; infos[i].dest[i] != -1; i++) {
        if (infos[infos[1].dest[i]].ant_on_node == true) {
            infos[1].nb_fourmi_on_node++;
            infos[infos[1].dest[i]].ant_on_node = false;
            my_printf("%s->%s\n", infos[i].name, infos[1].name);
        }
    }
    if (file->nb_node > 2) {
        for (int i = file->nb_node; i != 1; i -= 1) {
            for (int j = 0; infos[i].src[0] != -1; j++) {
                if (infos[infos[i].src[i]].ant_on_node == true && infos[i].ant_on_node == false) {
                    infos[i].ant_on_node = true;
                    infos[infos[1].src[i]].ant_on_node = false;
                    my_printf("%s->%s\n", infos[infos[i].src[i]].name, infos[i].name);
                }
            }
        }
        if (infos[0].nb_fourmi_on_node != 0)
            for (int i = 0; infos[0].dest[i] != -1 || infos[0].nb_fourmi_on_node != 0; i++) {
                if (infos[infos[0].dest[i]].ant_on_node == false) {
                    infos[1].nb_fourmi_on_node -= 1;
                    infos[infos[1].dest[i]].ant_on_node = true;
                    my_printf("%s->%s\n", infos[infos[0].dest[i]].name, infos[1].name);
                }
            }

    }
}
