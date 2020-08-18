/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#ifndef _MY_H_
#define _MY_H_

#include "my_runner.h"

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_is_prime(int nb);

int my_isneg(int n);

int my_put_nbr(int nb);

void my_putchar(char c);

int my_putstr(char *str);

char *my_revstr(char *str);

int *my_showmem(char const *str, int size);

int *my_showstr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_str_isalpha(char const *str);

int *my_str_islower(char const *str);

int *my_str_isnum(char const *str);

int *my_str_isprintable(char const *str);

int *my_str_isupper(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_strlen(char *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

int my_swap(int *a, int *b);

int my_show_word_array(char *const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str, char symbol);

void my_runner(void);

void destroy(t_runner *runner);

void create_window(t_runner *runner);

void parallax(t_runner *runner);

void initialisation(t_runner *runner);

void clock(t_runner *runner);

void rect(t_runner *runner);

void limit(t_runner *runner);

void add_clock(t_runner *runner);

void add_clock_part_two(t_runner *runner);

void create_runner(t_runner *runner);

void jump_up(t_runner *runner);

void jump_wait(t_runner *runner);

void jump_down(t_runner *runner);

void initialisation_clock(t_runner *runner);

void event_game(t_runner *runner);

void create_rocket(t_runner *rocket);

void rocket(t_runner *runner);

#endif /* MY_H */
