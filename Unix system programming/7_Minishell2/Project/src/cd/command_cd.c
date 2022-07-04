/*
** EPITECH PROJECT, 2022
** command_cd.c
** File description:
** all that deal with the cd command
*/
#include "minishell.h"

char *get_new_env(shell_t *shell, char *buffer)
{
    int i = 0;

    while (shell->envp[i] != NULL) {
        if (my_strncmp(shell->envp[i], buffer, my_strlen(buffer)) == 0) {
            return (my_strcut(shell->envp[i], my_strlen(buffer) + 1));
        }
        i++;
    }
    return NULL;
}

void command_cd(shell_t *shell, char *cmd)
{
    char *new_pwd;
    int chdir_status;
    char *old_pwd = getcwd(NULL, 0);
    char **command = str_to_word_array(cmd, ' ');
    if (my_strcmp(command[0], "-") == 0)
        chdir_status = chdir(get_new_env(shell, "OLDPWD"));
    if (my_strcmp(command[0], "cd") != 0 || shell->cd_status == 0)
        return;
    shell->cd_status = 0;
    if (command[1] == NULL)
        chdir_status = chdir(get_new_env(shell, "HOME"));
    else if (my_strcmp(command[1], "-") == 0)
        chdir_status = chdir(get_new_env(shell, "OLDPWD"));
    else
        chdir_status = chdir(command[1]);
    if (chdir_status == -1) {
        my_putstr(command[1]);
        my_putstr(": Not a directory.\n");
    }
    new_pwd = getcwd(NULL, 0);
    get_new_pwd(shell, new_pwd);
    get_new_old_pwd(shell, old_pwd);
}
