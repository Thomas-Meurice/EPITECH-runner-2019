/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void create_window(t_runner *runner)
{
    runner->window.mode.width = 1920;
    runner->window.mode.height = 1080;
    runner->window.mode.bitsPerPixel = 32;
    runner->window.window = sfRenderWindow_create(runner->window.mode,
        "my_runner", sfDefaultStyle | sfClose, NULL);
}

void initialisation_clock(t_runner *runner)
{
    runner->clock.clock = sfClock_create();
    runner->clock.clock_floor = sfClock_create();
    runner->clock.clock_tree = sfClock_create();
    runner->clock.clock_build = sfClock_create();
    runner->clock.clock_buildtwo = sfClock_create();
    runner->clock.clock_jump = sfClock_create();
    runner->clock.clock_rocket = sfClock_create();
    runner->runner.down = 0;
    runner->runner.wait = 0;
    runner->runner.up = 0;
    runner->runner.i = 0;
}