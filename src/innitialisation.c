/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** this is my_hunter
*/

#include "my.h"

void initialisation_buildtwo(t_runner *runner)
{
    runner->parallax.rect_buildtwo.top = 0;
    runner->parallax.rect_buildtwo.left = 0;
    runner->parallax.rect_buildtwo.width = 1920;
    runner->parallax.rect_buildtwo.height = 1080;
    runner->parallax.rect_second_buildtwo.top = 0;
    runner->parallax.rect_second_buildtwo.left = -1920;
    runner->parallax.rect_second_buildtwo.width = 1920;
    runner->parallax.rect_second_buildtwo.height = 1080;
}

void initialisation_build(t_runner *runner)
{
    runner->parallax.rect_build.top = 0;
    runner->parallax.rect_build.left = 0;
    runner->parallax.rect_build.width = 1920;
    runner->parallax.rect_build.height = 1080;
    runner->parallax.rect_second_build.top = 0;
    runner->parallax.rect_second_build.left = -1920;
    runner->parallax.rect_second_build.width = 1920;
    runner->parallax.rect_second_build.height = 1080;
    initialisation_buildtwo(runner);
}

void initialisation_tree(t_runner *runner)
{
    runner->parallax.rect_tree.top = 0;
    runner->parallax.rect_tree.left = 0;
    runner->parallax.rect_tree.width = 1920;
    runner->parallax.rect_tree.height = 1080;
    runner->parallax.rect_second_tree.top = 0;
    runner->parallax.rect_second_tree.left = -1920;
    runner->parallax.rect_second_tree.width = 1920;
    runner->parallax.rect_second_tree.height = 1080;
    initialisation_build(runner);
}

void initialisation_floor(t_runner *runner)
{
    runner->parallax.rect_floor.top = 0;
    runner->parallax.rect_floor.left = 0;
    runner->parallax.rect_floor.width = 1920;
    runner->parallax.rect_floor.height = 1080;
    runner->parallax.rect_second_floor.top = 0;
    runner->parallax.rect_second_floor.left = -1920;
    runner->parallax.rect_second_floor.width = 1920;
    runner->parallax.rect_second_floor.height = 1080;
    initialisation_tree(runner);
}

void initialisation(t_runner *runner)
{
    runner->parallax.rect.top = 0;
    runner->parallax.rect.left = 0;
    runner->parallax.rect.width = 1920;
    runner->parallax.rect.height = 1080;
    runner->parallax.rect_second.top = 0;
    runner->parallax.rect_second.left = -1920;
    runner->parallax.rect_second.width = 1920;
    runner->parallax.rect_second.height = 1080;
    initialisation_floor(runner);
}