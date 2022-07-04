/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** doesnt work
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int d = 0;

    while (src[d] != '\0') {
        dest[i] = src[d];
        i += 1;
        d += 1;
    }
    dest[i] = '\0';
    return dest;
}
