/*
** EPITECH PROJECT, 2021
** tests_101pong.c
** File description:
** units tests for 101pong
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <math.h>
int main(int ac, char **av);
/*
void redirect_all_std ( void )
{
    cr_redirect_stdout () ;
    cr_redirect_stderr () ;
}

Test (main, test_ball_wont_touch_the_paddle)
{
    main(./101pong 1 3 5 7 9 -2 4) ;
    cr_assert_stdout_eq_str("The velocity vector of the ball is:\n(6.00, 6.00, -7.00)\nAt time t + 4, ball coordinates will be:\n(31.00, 33.00, -30.00)\nThe ball won't reach the paddle.");
    }*/

Test(main, test_ball_wont_touch_the_paddle)
{
    cr_assert_str_neq("1 3 5 7 9 -2 4", "The velocity vector of the ball is:\n(6.00, 6.00, -7.00)\nAt time t + 4, ball coordinates will be:\n(31.00, 33.00, -30.00)\nThe ball won't reach the paddle.");
}
/*
Test(main, test_basic_value)
{
    cr_assert_str_eq("1.1 3 5 -7 9 2 4", "The velocity vector of the ball is:\n(-8.10, 6.00, -3.00)\nAt time t + 4, ball coordinates will be:\n(-39.40, 33.00, -10.00)\nThe incidence angle is:\n16.57 degrees");
}*/
/*
Test(main, error_endling)
{
    cr_assert_str_eq("./101pong 1.1 3 5 -7 9 2 -4", "84");
    cr_assert_str_eq("./101pong", "84");
    cr_assert_str_eq("./101pong 1.1 3 5 -7 9 2 -4 8", "84");
    cr_assert_str_eq("./101pong 1.1 3 5 -7 9 2 8.9", "84");
    cr_assert_str_eq("./101pong 1.1 3 5 -7 z 2 4", "84");
}
*/
