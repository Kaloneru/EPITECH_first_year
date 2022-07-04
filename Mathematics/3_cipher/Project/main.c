/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Cipher main
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int **get_key(char *str);
int **get_message(char *str, char *key);
int **calculus(int **key_matrix, int **message_matrix,
char *key, char *message);
int print_message(int **encrypted_message, char *key, char *message);

int error_handling(int argc, char **argv)
{
    if (argc < 2 || argc > 4)
        return (1);
    if (argc == 3)
        return (1);
    if (atoi(argv[3]) > 1 || atoi(argv[3]) < 0)
        return (1);
    return (0);
}

int help(void)
{
    printf("USAGE\n");
    printf("    ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("    message     a message, made of ASCII characters\n");
    printf("    key         the encryption key, made of ASCII char\
acters\n");
    printf("    flag        0 for the message to be encrypted, 1 t\
o be decrypted\n");
    return (0);
}

int encrypt(char **argv)
{
    int **key_matrix = get_key(argv[2]);
    int **message_matrix = get_message(argv[1], argv[2]);
    int **encrypted_message = calculus(key_matrix, message_matrix,
    argv[2], argv[1]);

    print_message(encrypted_message, argv[2], argv[1]);
    return (0);
}

int cipher(char **argv)
{
    if (argv[3][0] == '0')
        encrypt(argv);
    if (argv[3][0] == '1')
        return (0);
    return (0);
}

int main(int argc, char **argv)
{
    if (error_handling(argc, argv) == 1)
        return (84);
    else if (argv[1][0] == '-' && argv[1][1] == 'h')
        help();
    else
        cipher(argv);
    return (0);
}
