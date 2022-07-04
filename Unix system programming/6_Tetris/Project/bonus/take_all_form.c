/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** take_all_form
*/

#include "include/include.h"

void minus_first_line(all_t *all, int z)
{
    for (int j = 0; all->forms[z].form[0][j] != '\0'; j++) {
        all->forms[z].form[0][j] = '\0';
    }
}

void take_cara(all_t *all, int nb)
{
    char **cara;

    all->all_form->cara_form = malloc(sizeof(int *) * nb + 1);
    for (int i = 0; i != nb; i++) {
        cara = my_str_to_word_array(all->forms[i].form[0], ' ');
        if (my_str_isnum(cara[0]) == 1) {
            all->all_form->cara_form[i] = malloc(sizeof(int) * 3);
            all->all_form->cara_form[i][0] = atoi(cara[0]);
            all->all_form->cara_form[i][1] = atoi(cara[1]);
            all->all_form->cara_form[i][2] = atoi(cara[2]);
            minus_first_line(all, i);
        } else {
            all->all_form->cara_form[i] = malloc(sizeof(int) * 1);
            all->all_form->cara_form[i][0] = 0;
            minus_first_line(all, i);
        }
    }
}

void export_form(all_t *all, int nb)
{
    char *temp = NULL;

    all->forms = malloc(sizeof(init_form_t) * nb);
    for (int i = 0; i != nb; i++) {
        temp = my_strcat("tetriminos/", all->all_form->all_name_form[i]);
        all->forms[i].form = my_str_to_word_array(open_and_read(temp), '\n');
        free(temp);
    }
    take_cara(all, nb);
    all->all_form->nb = nb;
}

void take_all_form(all_t *all)
{
    struct dirent *dir;
    DIR *d1 = opendir("tetriminos/");
    DIR *d2 = opendir("tetriminos/");
    int nb = 0;
    int i = 0;
    if (d1) {
        while ((dir = readdir(d1)) != NULL)
            if (dir->d_name[0] != '.')
                nb++;
        all->all_form->all_name_form = malloc(sizeof(char *) * (nb + 1));
        all->all_form->all_name_form[nb] = NULL;
        while ((dir = readdir(d2)) != NULL) {
            if (dir->d_name[0] != '.') {
                all->all_form->all_name_form[i] = dir->d_name;
                i++;
            }
        }
    }
    export_form(all, nb);
}
