/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** c
*/
#include "include.h"
char *make_bsq(char *buff)
{
    int *arr_int = str_to_arr_int(buff);

    arr_int = bigest_square(arr_int, buff);
    buff = put_x(buff, arr_int);
    my_putstr(buff);
    my_putchar('\n');
    return buff;
}

int bsq(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat *sb = malloc(sizeof(struct stat));
    int size = stat(filepath, sb);
    char *buff;
    int i = 0;
    int k;
    int ret;
    
    size = sb->st_size;
    buff = malloc(sizeof(char) * size);
    ret = read(fd, buff, size);
    //le while et le for virent le nombre au début du fichier
    buff[size + 1] = '\0';
    while (buff[i - 1] != '\n')
        i++;
    k = i;
    for (int j = 0; buff[i] != '\0'; j++) {
        buff[j] =  buff[i];
        i++;
    }
    buff[size - k - 1] = '\0';
    make_bsq(buff); 
    close(fd);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (argc == 2)
        bsq(argv[1]);
    return 0;
}
