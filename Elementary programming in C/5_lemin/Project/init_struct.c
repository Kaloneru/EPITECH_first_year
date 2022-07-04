/*
** EPITECH PROJECT, 2022
** init_struct.c
** File description:
** desc
*/

 #include "include/lemin.h"

void malloc_tab_struct(infos_t *infos, file_t *file)
{
    for (int i = 0; i < file->nb_node + 1; i++) {
        infos[i].cord = malloc(sizeof(int) * 3);
        infos[i].cord[2] = -1;
    }
}

int tab_len(char **tab)
{
    int i = 0;
    for (; tab[i] != NULL; i++);
    return i;
}

 void init_struct(infos_t *infos, file_t *file)
{
    int indice_struct = 2;
    int i = 0;
    int j = 0;
    int get_form = 0;
    malloc_tab_struct(infos, file);
    file->directions = malloc(sizeof(char *) * (tab_len(file->anthill) + 1));
    int three_is_ok = 0;

    infos[0].nb_fourmi_on_node = my_atoi(file->anthill[0]);
    while ((get_form = get_forme_string(file->anthill[i], three_is_ok, i)) != -1) {
        if (get_form == 0) {
            i++;
            continue;
        }
        if (get_form == 1) {
            infos[indice_struct].name = get_first_infos(file->anthill[i]);
            infos[indice_struct].cord[0] = get_second_infos(file->anthill[i]);
            infos[indice_struct].cord[1] = get_third_infos(file->anthill[i]);
            indice_struct++;
            i++;
            continue;
        }
        if (get_form == 2) {
            file->directions[j] = file->anthill[i];
            i++;
            j++;
            continue;
        }
        if (get_form == 3) {
            i++;
            infos[0].name = get_first_infos(file->anthill[i]);
            infos[0].cord[0] = get_second_infos(file->anthill[i]);
            infos[0].cord[1] = get_third_infos(file->anthill[i]);
            i++;
            three_is_ok = 1;
            continue;
        }
        if (get_form == 4) {
            i++;
            infos[1].name = get_first_infos(file->anthill[i]);
            infos[1].cord[0] = get_second_infos(file->anthill[i]);
            infos[1].cord[1] = get_third_infos(file->anthill[i]);
            i++;
            continue;
        }
        if (get_form == 5) {
            infos[0].nb_fourmi_on_node = my_atoi(file->anthill[i]);
            i++;
        }
    }
}
