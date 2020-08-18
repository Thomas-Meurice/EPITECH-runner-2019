/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void flag_h(void)
{
    my_putstr("My_Runner: the rules of this game is to ");
    my_putstr("have te best score at 500 the score end");
    my_putstr("\n\tspace to Jump\n\t");
    my_putstr("Esc to quit or the button on the right top\n\t");
    my_putstr("you have 3 life after that is game");
    my_putstr("over for you and the game close\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        flag_h();
    else if (ac == 2 || ac == 1) {
        my_runner();
        return (0);
    }
    if (ac > 2)
        return (84);
}