/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void parallax_buildtwo(t_runner *runner)
{
    runner->parallax.buildtwo_texture = sfTexture_createFromFile(
        "res/building_second.png", NULL);
    if (!runner->parallax.buildtwo_texture)
        return;
    runner->parallax.buildtwo_sprite = sfSprite_create();
    sfSprite_setTexture(runner->parallax.buildtwo_sprite,
        runner->parallax.buildtwo_texture, sfFalse);
    runner->parallax.buildtwo_texture_second = sfTexture_createFromFile(
        "res/building_second.png", NULL);
    if (!runner->parallax.buildtwo_texture_second)
        return;
    runner->parallax.buildtwo_sprite_second = sfSprite_create();
    sfSprite_setTexture(runner->parallax.buildtwo_sprite_second,
        runner->parallax.buildtwo_texture_second, sfFalse);
}

void parallax_build(t_runner *runner)
{
    runner->parallax.build_texture = sfTexture_createFromFile(
        "res/building.png", NULL);
    if (!runner->parallax.build_texture)
        return;
    runner->parallax.build_sprite = sfSprite_create();
    sfSprite_setTexture(runner->parallax.build_sprite,
        runner->parallax.build_texture, sfFalse);
    runner->parallax.build_texture_second = sfTexture_createFromFile(
        "res/building.png", NULL);
    if (!runner->parallax.build_texture_second)
        return;
    runner->parallax.build_sprite_second = sfSprite_create();
    sfSprite_setTexture(runner->parallax.build_sprite_second,
        runner->parallax.build_texture_second, sfFalse);
    parallax_buildtwo(runner);
}

void parallax_tree(t_runner *runner)
{
    runner->parallax.tree_texture = sfTexture_createFromFile("res/tree.png",
        NULL);
    if (!runner->parallax.tree_texture)
        return;
    runner->parallax.tree_sprite = sfSprite_create();
    sfSprite_setTexture(runner->parallax.tree_sprite,
        runner->parallax.tree_texture, sfFalse);
    runner->parallax.tree_texture_second = sfTexture_createFromFile(
        "res/tree.png", NULL);
    if (!runner->parallax.tree_texture_second)
        return;
    runner->parallax.tree_sprite_second = sfSprite_create();
    sfSprite_setTexture(runner->parallax.tree_sprite_second,
        runner->parallax.tree_texture_second, sfFalse);
    parallax_build(runner);
}

void parallax_floor(t_runner *runner)
{
    runner->parallax.floor_texture = sfTexture_createFromFile("res/floor.png",
        NULL);
    if (!runner->parallax.floor_texture)
        return;
    runner->parallax.floor_sprite = sfSprite_create();
    sfSprite_setTexture(runner->parallax.floor_sprite,
        runner->parallax.floor_texture, sfFalse);
    runner->parallax.floor_texture_second = sfTexture_createFromFile(
        "res/floor.png", NULL);
    if (!runner->parallax.floor_texture_second)
        return;
    runner->parallax.floor_sprite_second = sfSprite_create();
    sfSprite_setTexture(runner->parallax.floor_sprite_second,
        runner->parallax.floor_texture_second, sfFalse);
    parallax_tree(runner);
}

void parallax(t_runner *runner)
{
    runner->parallax.sun_texture = sfTexture_createFromFile("res/sun.png",
        NULL);
    if (!runner->parallax.sun_texture)
        return;
    runner->parallax.sun_sprite = sfSprite_create();
    sfSprite_setTexture(runner->parallax.sun_sprite,
        runner->parallax.sun_texture, sfFalse);
    runner->parallax.sun_texture_second = sfTexture_createFromFile(
        "res/sun.png", NULL);
    if (!runner->parallax.sun_texture_second)
        return;
    runner->parallax.sun_sprite_second = sfSprite_create();
    sfSprite_setTexture(runner->parallax.sun_sprite_second,
        runner->parallax.sun_texture_second, sfFalse);
    parallax_floor(runner);
}