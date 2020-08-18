/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"
#include <stdio.h>

void create_rocket(t_runner *runner)
{
    runner->rocket.rocket_texture = sfTexture_createFromFile("res/rocket.png",
        NULL);
    if (!runner->rocket.rocket_texture)
        return;
    runner->rocket.rocket_sprite = sfSprite_create();
    sfSprite_setTexture(runner->rocket.rocket_sprite,
        runner->rocket.rocket_texture, sfFalse);
    runner->rocket.rect.top = 0;
    runner->rocket.rect.left = 0;
    runner->rocket.rect.width = 350;
    runner->rocket.rect.height = 200;
    runner->rocket.pos_rocket.x = 2000;
    runner->rocket.pos_rocket.y = 680;
}

void rocket(t_runner *runner)
{
    sfTime time_jump = sfClock_getElapsedTime(runner->clock.clock_rocket);
    float second_jump = time_jump.microseconds / 1000000.0;
    float i = 5;

    sfSprite_setTextureRect(runner->rocket.rocket_sprite,
        runner->rocket.rect);
    sfSprite_setPosition(runner->rocket.rocket_sprite,
        runner->rocket.pos_rocket);
    if (second_jump >= 0.001) {
        runner->rocket.pos_rocket.x -= i;
        sfClock_restart(runner->clock.clock_rocket);
    }
    if (runner->rocket.pos_rocket.x < -250) {
        runner->rocket.pos_rocket.x = 2000;
        i += 3;
    }
}