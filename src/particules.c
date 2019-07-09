/*
** EPITECH PROJECT, 2019
** particules
** File description:
** particules
*/

#include "rpg.h"

void set_pos(ticles_t *ticles, draw_t *draw)
{
    int i = 0;
    int size = rand() % 5 + 8;
    sfVector2f pos = {1230 + draw->x, 390 + draw->y};

    while (i < (ticles->nb * 4)) {
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
}

void display_particles(sfRenderWindow *window, ticles_t *ticles, draw_t *draw)
{
    float s = 1000000;
    int i = 0;
    int j = 0;

    if (sfClock_getElapsedTime(ticles->clock).microseconds / s >= 0.01) {
        sfVertexArray_clear(ticles->vertex);
        i = 0;
        set_pos(ticles, draw);
        while (i < ticles->nb * 4) {
            j = 0;
            while (j < 4) {
                sfVertexArray_append(ticles->vertex, ticles->word[i + j]);
                j++;
            }
            i += 4;
        }
        sfClock_restart(ticles->clock);
    }
    sfRenderWindow_drawVertexArray(window, ticles->vertex, NULL);
}
