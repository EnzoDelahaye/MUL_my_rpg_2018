/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_particles
*/

#include "rpg.h"

void rand_color(ticles_t *ticles, int i)
{
    int j = 0;
    sfColor color;

    color.r = 255;
    color.g = 100;
    color.b = 100;
    color.a = 255;
    while (j < 4) {
        ticles->word[i + 4].color = color;
        j++;
    }
}

ticles_t *set_part_pos(ticles_t *ticles, draw_t *draw)
{
    int i = 0;
    int size = rand() % 5 + 2;
    sfVector2f pos = {1230 + draw->x, 370 + draw->y};

    while (i < (ticles->nb * 4)) {
        rand_color(ticles, i);
        ticles->word[i].position.x = rand() % 64 + (pos.x - 32);
        ticles->word[i].position.y = rand() % 64 + (pos.y - 32);
        ticles->word[i + 1].position.x = ticles->word[i].position.x + size;
        ticles->word[i + 1].position.y = ticles->word[i].position.y;
        ticles->word[i + 2].position.x = ticles->word[i].position.x + size;
        ticles->word[i + 2].position.y = ticles->word[i].position.y + size;
        ticles->word[i + 3].position.x = ticles->word[i].position.x;
        ticles->word[i + 3].position.y = ticles->word[i].position.y + size;
        i += 4;
    }
    return (ticles);
}

ticles_t *init_particles(draw_t *draw, int nb)
{
    ticles_t *ticles = malloc(sizeof(ticles_t));

    if (!ticles)
        return (NULL);
    if (!(ticles->word = malloc(sizeof(sfVertex) * (nb * 4))))
        return (NULL);
    ticles->nb = nb;
    ticles->clock = sfClock_create();
    ticles->vertex = sfVertexArray_create();
    sfVertexArray_setPrimitiveType(ticles->vertex, sfQuads);
    ticles = set_part_pos(ticles, draw);
    return (ticles);
}
