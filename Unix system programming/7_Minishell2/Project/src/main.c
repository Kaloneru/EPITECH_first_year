/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** the start of all the project
*/
#include "minishell.h"

static void get_env(char **envp, shell_t *shell)
{
    int i = 0;
    int x = 0;
    int y = 2100;
    while (envp[x] != NULL)
        x++;
    shell->envp = malloc(sizeof(char *) * (x + 1));
    while (i != x) {
        shell->envp[i] = malloc(sizeof(char) * y);
        shell->envp[i] = my_strcpy(shell->envp[i], envp[i]);
        i++;
    }
    shell->envp[x] = NULL;
}

int main(int argc, char **argv, char **envp)
{
    shell_t *shell = malloc(sizeof(shell_t));

    get_env(envp, shell);
    if (argc == 1)
        shell_loop(shell);
    else
        return 84;
    return 0;
    argv = argv;
}
