/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "lemin.h"

int is_comment(char *str)
{
    if (str[0] == '#' && str[1] != '#') return 1;
    return 0;
}

int get_forme_string(char *str, int ok, int i)
{
    if (str == NULL) return -1;
    if (str[0] == '\n') return -1;
    if (return_one(str, ' ') == 1) return 1;
    if (return_two(str, '-') == 1) return 2;
    if (return_three_four(str, '\0') == 1 && ok == 0) return 3;
    if (return_three_four(str, '\0') == 1) return 4;
    if (is_comment(str) == 1) return 0;
    if (return_five(str) == 1 && i == 0) return 5;
    return -1;
}

void calcul_number_of_node(file_t *file)
{
    for (int i = 0; file->anthill[i] != NULL; i++) {
        if (return_one(file->anthill[i], ' ') == 1)
            file->nb_node++;
    }
}

void lem_in(infos_t *infos, file_t *file)
{
    printf("entre dans lem_in\n");
    while (infos[1].nb_fourmi_on_node != file->nb_node) {
        fais_avancer_fourmies(infos, file);
        infos[1].nb_fourmi_on_node++;
    }
}

void print_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    file_t *file = malloc(sizeof(file_t));
    char *anthill = open_and_read(argv[1]);
    printf("sort de open_and_read\n");
    file->anthill = str_to_word_array(anthill, '\n');
    printf("sort de str_to_word_array\n");
    calcul_number_of_node(file);
    printf("sort de calcul_number_of_node\n");
    infos_t *infos = malloc(sizeof(infos_t) * (file->nb_node + 1));
    init_struct(infos, file);
    printf("sort de init_struct\n");
    init_dests(infos, file);
    printf("sort de init_dest\n");
    lem_in(infos, file);
    return 0;
}
