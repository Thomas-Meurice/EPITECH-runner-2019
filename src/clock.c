/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void add_clock_part_two(t_runner *runner)
{
    if (runner->clock.second_tree >= 0.00000000000000001) {
        runner->parallax.rect_tree.left += 2;
        runner->parallax.rect_second_tree.left += 2;
        sfClock_restart(runner->clock.clock_tree);
    }
    if (runner->clock.second_build >= 0.02) {
        runner->parallax.rect_build.left += 2;
        runner->parallax.rect_second_build.left += 2;
        sfClock_restart(runner->clock.clock_build);
    }
    if (runner->clock.second_buildtwo >= 0.04) {
        runner->parallax.rect_buildtwo.left += 2;
        runner->parallax.rect_second_buildtwo.left += 2;
        sfClock_restart(runner->clock.clock_buildtwo);
    }
}

void add_clock(t_runner *runner)
{
    if (runner->clock.second >= 0.1) {
        if (runner->runner.up == 0 && runner->runner.wait == 0 &&
            runner->runner.down == 0)
            runner->runner.rect.left += runner->runner.rect.width;
        runner->parallax.rect.left += 1;
        runner->parallax.rect_second.left += 1;
        sfClock_restart(runner->clock.clock);
        if (runner->runner.rect.left == 486)
            runner->runner.rect.left = 0;
    }
    if (runner->clock.second_floor >= 0.00000000000000001) {
        runner->parallax.rect_floor.left += 2;
        runner->parallax.rect_second_floor.left += 2;
        sfClock_restart(runner->clock.clock_floor);
    }
    add_clock_part_two(runner);
}

void limit(t_runner *runner)
{
    if (runner->parallax.rect.left > 1920)
        runner->parallax.rect.left = -1920;
    if (runner->parallax.rect_second.left > 1920)
        runner->parallax.rect_second.left = -1920;
    if (runner->parallax.rect_floor.left > 1920)
        runner->parallax.rect_floor.left = -1920;
    if (runner->parallax.rect_second_floor.left > 1920)
        runner->parallax.rect_second_floor.left = -1920;
    if (runner->parallax.rect_build.left > 1920)
        runner->parallax.rect_build.left = -1920;
    if (runner->parallax.rect_second_build.left > 1920)
        runner->parallax.rect_second_build.left = -1920;
    if (runner->parallax.rect_tree.left > 1920)
        runner->parallax.rect_tree.left = -1920;
    if (runner->parallax.rect_second_tree.left > 1920)
        runner->parallax.rect_second_tree.left = -1920;
    if (runner->parallax.rect_buildtwo.left > 1920)
        runner->parallax.rect_buildtwo.left = -1920;
    if (runner->parallax.rect_second_buildtwo.left > 1920)
        runner->parallax.rect_second_buildtwo.left = -1920;
}

void rect(t_runner *runner)
{
    sfSprite_setTextureRect(runner->parallax.sun_sprite_second,
        runner->parallax.rect_second);
    sfSprite_setTextureRect(runner->parallax.floor_sprite,
        runner->parallax.rect_floor);
    sfSprite_setTextureRect(runner->parallax.floor_sprite_second,
        runner->parallax.rect_second_floor);
    sfSprite_setTextureRect(runner->parallax.buildtwo_sprite,
        runner->parallax.rect_buildtwo);
    sfSprite_setTextureRect(runner->parallax.buildtwo_sprite_second,
        runner->parallax.rect_second_buildtwo);
    sfSprite_setTextureRect(runner->parallax.build_sprite,
        runner->parallax.rect_build);
    sfSprite_setTextureRect(runner->parallax.build_sprite_second,
        runner->parallax.rect_second_build);
    sfSprite_setTextureRect(runner->parallax.tree_sprite,
        runner->parallax.rect_tree);
    sfSprite_setTextureRect(runner->parallax.tree_sprite_second,
        runner->parallax.rect_second_tree);
    sfSprite_setTextureRect(runner->runner.runner_sprite, runner->runner.rect);
    sfSprite_setPosition(runner->runner.runner_sprite,
        runner->runner.pos_runner);
}

void clock(t_runner *runner)
{
    runner->clock.time = sfClock_getElapsedTime(runner->clock.clock);
    runner->clock.second = runner->clock.time.microseconds / 1000000.0;
    runner->clock.time_floor = sfClock_getElapsedTime(
        runner->clock.clock_floor);
    runner->clock.second_floor =
        runner->clock.time_floor.microseconds / 1000000.0;
    runner->clock.time_tree = sfClock_getElapsedTime(runner->clock.clock_tree);
    runner->clock.second_tree =
        runner->clock.time_tree.microseconds / 1000000.0;
    runner->clock.time_build = sfClock_getElapsedTime(
        runner->clock.clock_build);
    runner->clock.second_build =
        runner->clock.time_build.microseconds / 1000000.0;
    runner->clock.time_buildtwo = sfClock_getElapsedTime(
        runner->clock.clock_buildtwo);
    runner->clock.second_buildtwo =
        runner->clock.time_buildtwo.microseconds / 1000000.0;
    sfSprite_setTextureRect(runner->parallax.sun_sprite, runner->parallax.rect);
    add_clock(runner);
    limit(runner);
    rect(runner);
}