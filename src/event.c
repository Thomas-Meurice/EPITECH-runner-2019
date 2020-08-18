/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"
#include <stdio.h>

void event_part_two(t_runner *runner)
{
    while (sfRenderWindow_pollEvent(runner->window.window,
        &runner->event.event))
        if (runner->event.event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(runner->window.window);
    if (runner->runner.up > 0 && runner->runner.down == 0 &&
        runner->runner.wait == 0)
        jump_up(runner);
    if (runner->runner.up == 0 && runner->runner.down == 0 &&
        runner->runner.wait > 0)
        jump_wait(runner);
    if (runner->runner.up == 0 && runner->runner.down > 0 &&
        runner->runner.wait == 0)
        jump_down(runner);
}

void event_game(t_runner *runner)
{
    if (runner->runner.i == 0)
        runner->runner.i = sfKeyboard_isKeyPressed(sfKeySpace);
    if (runner->runner.i > 0 && runner->runner.up == 0 &&
        runner->runner.wait == 0 && runner->runner.down == 0)
        runner->runner.up = 1;
    if (runner->runner.up == 1 && runner->runner.down == 0 &&
        runner->runner.wait == 0)
        runner->runner.rect.left = 491;
    if (runner->runner.up == 0 && runner->runner.down == 1 &&
        runner->runner.wait == 1)
        runner->runner.rect.left = 567;
    if (runner->runner.up == 0 && runner->runner.down == 0 &&
        runner->runner.wait == 1)
        runner->runner.rect.left = 567;
    event_part_two(runner);
}