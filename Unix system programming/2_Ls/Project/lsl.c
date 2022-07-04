/*
** EPITECH PROJECT, 2021
** lsl.c
** File description:
** my_ls
*/
#include "include.h"
#include <pwd.h>
#include <grp.h>
#include <time.h>

void type_and_perm(struct stat sb)
{
    if (S_ISREG(sb.st_mode))
        printf("%c", '-');
    if (S_ISDIR(sb.st_mode))
        printf("%c", 'd');
    printf(sb.st_mode & S_IRUSR ? "r" : "-");
    printf(sb.st_mode & S_IWUSR ? "w" : "-");
    printf(sb.st_mode & S_IXUSR ? "x" : "-");
    printf(sb.st_mode & S_IRGRP ? "r" : "-");
    printf(sb.st_mode & S_IWGRP ? "w" : "-");
    printf(sb.st_mode & S_IXGRP ? "x" : "-");
    printf(sb.st_mode & S_IROTH ? "r" : "-");
    printf(sb.st_mode & S_IWOTH ? "w" : "-");
    printf(sb.st_mode & S_IXOTH ? "x" : "-");
    printf(" ");
}

void block_tot(char *str)
{
    DIR *d = opendir(str);
    struct dirent *pDirent;
    struct stat sb;
    int size = 0;

    while ((pDirent = readdir(d)) != NULL) {
        if (pDirent->d_name[0] != '.') {
            stat(pDirent->d_name, &sb);
            size = size + sb.st_blocks;
        }
    }
    size = size / 2;
    printf("total %d\n", size);
    closedir(d);
}

int fonction(char *filepath)
{
    struct stat sb;
    struct group *gid;
    struct passwd *uid;
    struct tm *time;
    char *chtime;
    
    if(lstat(filepath, &sb) == -1) {
        return 84;
    }
    uid = getpwuid(sb.st_uid);
    gid = getgrgid(sb.st_gid);
    chtime = ctime(&sb.st_mtime);
    type_and_perm(sb);
    printf("%ld %s %s %ld ", sb.st_nlink, uid->pw_name, gid->gr_name, sb.st_size);
    for (int i = 4; i < 16; i++) {
        printf("%c", chtime[i]);
    }
    printf(" %s\n", filepath);
    return 0;
}

int lsl(DIR *d, char *str)
{
    struct dirent *pDirent;
    
    block_tot(str);
    while ((pDirent = readdir(d)) != NULL) {
        if (pDirent->d_name[0] != '.') {
            fonction(pDirent->d_name);
        }
    }
    closedir(d);
    return 0;
}
