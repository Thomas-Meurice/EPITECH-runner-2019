/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"
#include <stdio.h>

void create_runner(t_runner *runner)
{
    runner->runner.runner_texture = sfTexture_createFromFile("res/runner.png",
        NULL);
    if (!runner->runner.runner_texture)
        return;
    runner->runner.runner_sprite = sfSprite_create();
    sfSprite_setTexture(runner->runner.runner_sprite,
        runner->runner.runner_texture, sfFalse);
    runner->runner.rect.top = 0;
    runner->runner.rect.left = 0;
    runner->runner.rect.width = 81;
    runner->runner.rect.height = 100;
    runner->runner.pos_runner.x = 100;
    runner->runner.pos_runner.y = 750;
}

void jump_up(t_runner *runner)
{
    sfTime time_jump = sfClock_getElapsedTime(runner->clock.clock_jump);
    float second_jump = time_jump.microseconds / 1000000.0;
    if (runner->runner.pos_runner.y > 519 && runner->runner.pos_runner.y < 571)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y -= 2;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y > 570 && runner->runner.pos_runner.y < 671)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y -= 4;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y > 670)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y -= 8;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y < 520) {
        runner->runner.up = 0; runner->runner.wait = 1;
    }
}

void jump_wait(t_runner *runner)
{
    sfTime time_jump = sfClock_getElapsedTime(runner->clock.clock_jump);
    float second_jump = time_jump.microseconds / 1000000.0;
    if (runner->runner.pos_runner.y > 497)
        if (second_jump >= 0.4) {
            runner->runner.wait = 0;
            runner->runner.down = 1;
            sfClock_restart(runner->clock.clock_jump);
        }
}

void jump_down(t_runner *runner)
{
    sfTime time_jump = sfClock_getElapsedTime(runner->clock.clock_jump);
    float second_jump = time_jump.microseconds / 1000000.0;
    if (runner->runner.pos_runner.y < 749 && runner->runner.pos_runner.y > 659)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y += 8;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y < 570 && runner->runner.pos_runner.y > 499)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y += 2;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y < 660 && runner->runner.pos_runner.y > 569)
        if (second_jump >= 0.0001) {
            runner->runner.pos_runner.y += 4;
            sfClock_restart(runner->clock.clock_jump);
        }
    if (runner->runner.pos_runner.y > 748) {
        runner->runner.down = 0; runner->runner.i = 0;
        runner->runner.rect.left = 0;
    }
}