/*
** EPITECH PROJECT, 2021
** scase.c
** File description:
** S case
*/

int my_putstr(char const *str);
void my_putchar(char c);
char *octal_ascii(char c);

void scase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            octal_ascii(str[i]);
            i++;
        } else {
            my_putchar(str[i]);
            i++;
        }
    }
}
