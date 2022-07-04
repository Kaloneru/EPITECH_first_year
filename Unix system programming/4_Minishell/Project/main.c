/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** minishell
*/
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "fonctions.h"

void evan(int sig)
{

}

int main(int argc, char **argv, char **envp)
{
    env_t *env = malloc(sizeof(env_t));
    char *buffer = NULL;
    size_t size = 0;

    signal(SIGINT, evan);

    while (1) {
        printf("oooooooo------>");
        if (getline(&buffer, &size, stdin) == -1)
            break;
        else {
            buffer = del_spaces(buffer);
            get_execve(argc, str_to_word_array(buffer, ' '), envp, env);
        }
    }
    return (0);
}
