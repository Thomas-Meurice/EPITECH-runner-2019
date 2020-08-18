/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void destroy_part_two(t_runner *runner)
{
    sfSprite_destroy(runner->parallax.tree_sprite);
    sfTexture_destroy(runner->parallax.tree_texture_second);
    sfSprite_destroy(runner->parallax.tree_sprite_second);
    sfTexture_destroy(runner->parallax.build_texture);
    sfSprite_destroy(runner->parallax.build_sprite);
    sfTexture_destroy(runner->parallax.build_texture_second);
    sfSprite_destroy(runner->parallax.build_sprite_second);
    sfTexture_destroy(runner->parallax.buildtwo_texture);
    sfSprite_destroy(runner->parallax.buildtwo_sprite);
    sfTexture_destroy(runner->parallax.buildtwo_texture_second);
    sfSprite_destroy(runner->parallax.buildtwo_sprite_second);
    sfClock_destroy(runner->clock.clock);
    sfClock_destroy(runner->clock.clock_floor);
    sfClock_destroy(runner->clock.clock_tree);
    sfClock_destroy(runner->clock.clock_build);
    sfClock_destroy(runner->clock.clock_buildtwo);
}

void destroy(t_runner *runner)
{
    sfSprite_destroy(runner->window.bg_sprite);
    sfTexture_destroy(runner->window.texture);
    sfRenderWindow_destroy(runner->window.window);
    sfTexture_destroy(runner->parallax.sun_texture);
    sfSprite_destroy(runner->parallax.sun_sprite);
    sfTexture_destroy(runner->parallax.sun_texture_second);
    sfSprite_destroy(runner->parallax.sun_sprite_second);
    sfTexture_destroy(runner->parallax.floor_texture);
    sfSprite_destroy(runner->parallax.floor_sprite);
    sfTexture_destroy(runner->parallax.floor_texture_second);
    sfSprite_destroy(runner->parallax.floor_sprite_second);
    sfTexture_destroy(runner->parallax.tree_texture);
    destroy_part_two(runner);
}