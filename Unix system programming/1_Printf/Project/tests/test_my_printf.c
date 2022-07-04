/*
** EPITECH PROJECT, 2021
** test.c
** File description:
** 
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../fonctions.h"
void redirect_all_std ( void )
{
    cr_redirect_stdout () ;
    cr_redirect_stderr () ;
}
Test ( my_printf , simple_string , . init = redirect_all_std )
{
    my_printf ("Hello %s My favorite number is %d and %i and my name start with %c and I got 69%% at my_printf %c%c", "world !", 42, 7, 'T', '!', '\n') ;
    cr_assert_stdout_eq_str ("Hello world ! My favorite number is 42 and 7 and my name start with T and I got 69% at my_printf !\n") ;
}
/*
Test ( my_printf , simple_string2 , . init = redirect_all_std )
{
    my_printf ("%o", 7);
    cr_assert_stdout_eq_str ("7");
}

Test ( my_printf , simple_string3 , . init = redirect_all_std )
{
    my_printf ("%x", 7);
    cr_assert_stdout_eq_str ("7");
}

Test ( my_printf , simple_string4 , . init = redirect_all_std )
{
    my_printf ("%X", 7);
    cr_assert_stdout_eq_str ("7");
}

Test ( my_printf , simple_string5 , . init = redirect_all_std )
{
    my_printf ("%b", 1);
    cr_assert_stdout_eq_str ("1");
}

Test ( my_printf , simple_string6 , . init = redirect_all_std )
{
    my_printf ("8%%");
    cr_assert_stdout_eq_str ("8%");
}
*/
