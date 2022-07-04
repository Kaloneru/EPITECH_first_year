/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverses a string
*/
int my_strlen(char *str);

char *my_revstr(char *str)
{

    int len = my_strlen(str) - 1;
    int swap1 = 0;
    char c;

    while (swap1 < len) {
        c = str[swap1];
        str[swap1] = str[len];
        str[len] = c;
        swap1 += 1;
        len -= 1;
    }
    return str;
}
