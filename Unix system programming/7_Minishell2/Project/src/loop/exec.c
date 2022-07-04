/*
** EPITECH PROJECT, 2022
** exec.c
** File description:
** exec somthing with execve
*/
#include "minishell.h"

void exec(char *buffer, shell_t *shell)
{
    char **command = str_to_word_array(buffer, ' ');

    if (shell->cd_status == 0)
        return;
    shell->cd_status = 0;
    if (access(command[0], X_OK) == 0)
        execve(command[0], command, shell->envp);
    else {
        my_putstr(command[0]);
        my_putstr(": Command not found.\n");
    }
    free(command);
}
