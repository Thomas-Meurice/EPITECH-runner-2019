/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** Thomas Meurice <thomas.meurice@epitech.eu>
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}