/*
** EPITECH PROJECT, 2022
** get_new_pwd
** File description:
** get the new pwd / oldpwd
*/
#include "minishell.h"

static void get_new_pwd2(shell_t *shell, char *value, int i)
{
    int j = 4;

    if (my_strncmp(shell->envp[i], "PWD=", 4) == 0) {
        while (shell->envp[i][j] != '\0') {
            shell->envp[i][j] = '\0';
            j++;
        }
        shell->envp[i] = my_strcat(shell->envp[i], value);
    }
}

void get_new_pwd(shell_t *shell, char *value)
{
    int i = 0;

    while (shell->envp[i] != NULL) {
        get_new_pwd2(shell, value, i);
        i++;
    }
}

static void get_new_old_pwd2(shell_t *shell, char *value, int i)
{
    int j = 7;

    if (my_strncmp(shell->envp[i], "OLDPWD=", 7) == 0) {
        while ( shell->envp[i][j] != '\0') {
            shell->envp[i][j] = '\0';
            j++;
        }
        shell->envp[i] = my_strcat(shell->envp[i], value);
    }
}

void get_new_old_pwd(shell_t *shell, char *value)
{
    int i = 0;

    while (shell->envp[i] != NULL) {
        get_new_old_pwd2(shell, value, i);
        i++;
    }
}
