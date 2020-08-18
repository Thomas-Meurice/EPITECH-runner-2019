/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#ifndef _MY_HUNTER_H_
#define _MY_HUNTER_H_

#include "my.h"
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

typedef struct s_window
{
    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *texture;
    sfSprite *bg_sprite;
} t_window;

typedef struct s_parallax
{
    sfTexture *sun_texture;
    sfSprite *sun_sprite;
    sfIntRect rect;
    sfTexture *sun_texture_second;
    sfSprite *sun_sprite_second;
    sfIntRect rect_second;
    sfTexture *floor_texture;
    sfSprite *floor_sprite;
    sfTexture *floor_texture_second;
    sfSprite *floor_sprite_second;
    sfIntRect rect_second_floor;
    sfIntRect rect_floor;
    sfTexture *tree_texture;
    sfSprite *tree_sprite;
    sfTexture *tree_texture_second;
    sfSprite *tree_sprite_second;
    sfIntRect rect_second_tree;
    sfIntRect rect_tree;
    sfTexture *build_texture;
    sfSprite *build_sprite;
    sfTexture *build_texture_second;
    sfSprite *build_sprite_second;
    sfIntRect rect_second_build;
    sfIntRect rect_build;
    sfTexture *buildtwo_texture;
    sfSprite *buildtwo_sprite;
    sfTexture *buildtwo_texture_second;
    sfSprite *buildtwo_sprite_second;
    sfIntRect rect_second_buildtwo;
    sfIntRect rect_buildtwo;
} t_parallax;

typedef struct s_clock
{
    sfClock *clock;
    sfClock *clock_floor;
    sfTime time;
    float second;
    sfTime time_floor;
    float second_floor;
    sfClock *clock_tree;
    sfTime time_tree;
    float second_tree;
    sfClock *clock_build;
    sfTime time_build;
    float second_build;
    sfClock *clock_buildtwo;
    sfTime time_buildtwo;
    float second_buildtwo;
    sfClock *clock_jump;
    sfClock *clock_rocket;
} t_clock;

typedef struct s_event
{
    sfEvent event;
} t_event;

typedef struct s_jump
{
    sfTexture *runner_texture;
    sfSprite *runner_sprite;
    sfIntRect rect;
    sfVector2f pos_runner;
    int up;
    int down;
    int wait;
    int i;
} t_jump;

typedef struct s_rocket
{
    sfTexture *rocket_texture;
    sfSprite *rocket_sprite;
    sfIntRect rect;
    sfVector2f pos_rocket;
} t_rocket;

typedef struct s_runner
{
    struct s_window window;
    struct s_event event;
    struct s_parallax parallax;
    struct s_clock clock;
    struct s_jump runner;
    struct s_rocket rocket;
} t_runner;

#endif /* MY_HUNTER_H_ */
