/*
** EPITECH PROJECT, 2021
** fonctions.h
** File description:
** fonctions use for printf
*/

#ifndef FONCTIONS_H_
    #define FONCTION_H_
void my_printf(char *s, ...);
void my_put_nbr_un(unsigned int nb);
char *my_strcpy(char *dest, char const *src);
char *decimal_to_binary(int nb);
char *decimal_to_octal(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_put_nbr(int nb);
char *decimal_to_majx_hexadecimal(unsigned int nb);
char *decimal_to_x_hexadecimal(unsigned int nb);
#endif /*FONCTION_H_*/
