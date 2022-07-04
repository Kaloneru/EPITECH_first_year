/*
** EPITECH PROJECT, 2021
** include.h
** File description:
** my_ls
*/
#include <sys/syscall.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>

#ifndef INCLUDE_H_
    #define INCLUDE_H
int my_strcmp(const char *str1, const char *str2);
char *my_strcat(char *dest, char const *src);
int lsa(DIR *d);
int ls(DIR *d);
int lsl(DIR *d, char *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
#endif /*INCLUDE_H_*/
