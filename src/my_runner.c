/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"
#include <stdio.h>

void draw(t_runner *runner)
{
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.sun_sprite, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.sun_sprite_second, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.buildtwo_sprite_second, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.buildtwo_sprite, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.build_sprite_second, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.build_sprite, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.tree_sprite_second, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.tree_sprite, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.floor_sprite_second, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->parallax.floor_sprite, NULL);
}

void display(t_runner *runner)
{
    runner->window.texture = sfTexture_createFromFile("res/background.png",
        NULL);
    if (!runner->window.texture)
        return;
    runner->window.bg_sprite = sfSprite_create();
    sfSprite_setTexture(runner->window.bg_sprite, runner->window.texture,
        sfFalse);
}

void gameloop(t_runner *runner)
{
    sfRenderWindow_drawSprite(runner->window.window, runner->window.bg_sprite,
        NULL);
    draw(runner);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->runner.runner_sprite, NULL);
    sfRenderWindow_drawSprite(runner->window.window,
        runner->rocket.rocket_sprite, NULL);
    clock(runner);
    event_game(runner);
    rocket(runner);
    sfRenderWindow_display(runner->window.window);
    sfRenderWindow_clear(runner->window.window, sfMagenta);
}

void my_runner(void)
{
    t_runner runner;

    create_window(&runner);
    if (!runner.window.window) {
        my_putstr("ERROR : No window!\n");
        return;
    }
    initialisation_clock(&runner);
    initialisation(&runner);
    display(&runner);
    parallax(&runner);
    create_runner(&runner);
    create_rocket(&runner);
    while (sfRenderWindow_isOpen(runner.window.window))
        gameloop(&runner);
    destroy(&runner);
}