/*
** EPITECH PROJECT, 2022
** giantman.c
** File description:
** giant man
*/
#include "../include/antman.h"

void all_words(giantman_t *giant);
int *number(giantman_t *giant, char **argv);

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}


int rows(char *str)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '@')
            y++;
    }
    return (y + 1);
}

char *open_and_read(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    int ret = stat(filepath, &sb);
    int buff_size = sb.st_size;
    char *buff = malloc(sizeof(char *) * buff_size);;

    if (ret == -1)
        return (NULL);
    read(fd, buff, buff_size);
    buff[buff_size - 1] = '\0';
    close(fd);
    return (buff);
}

char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i = i + 1;
    }
    return (arr);
}

static int arr_len(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return i;
}

void init(giantman_t *giant, char **argv)
{

    giant->filepath = argv[1];

    giant->filetype = argv[2][0];

    giant->str = open_and_read(giant->filepath);

    giant->rows = rows(giant->str);
    giant->columns = my_strlen(giant->str);
    giant->array = mem_alloc_2d_char_array(giant->rows, giant->columns);
}

void giantman(char **argv)
{
    giantman_t *giant = malloc(sizeof(giantman_t));
    int *nb;
    //int nb_nb;
    int k = 0;

    init(giant, argv);
    printf("%s\n", giant->str);

    all_words(giant);
    nb = malloc(sizeof(int) * my_strlen(giant->array[giant->x]));

    nb = number(giant, argv);

    // nb_nb = my_strlen(nb);/*j en suis laaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa : faut faire une fonction qui donne la taille d un int * */

    //printf("%i\n", giant->len_arr_int - 1);
    printf("%i\n", nb[1]);
    for (int j = 0; j != giant->len_arr_int - 1; j++) {
        k = nb[j] - 1;
        printf("%s", giant->array[k]);
        if (j + 1 != giant->len_arr_int - 1)
            printf(" ");
    }
    printf("\n");
}
