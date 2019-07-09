/*
** EPITECH PROJECT, 2019
** particule
** File description:
** particule
*/

#ifndef PARTICLES_H_
#define PARTICLES_H_

#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/System/Vector2.h>

/*
**  PARTICLES
*/

typedef struct s_ticles {
    int nb;
    sfColor color;
    sfVertex *word;
    sfClock *clock;
    sfVertexArray *vertex;
}ticles_t;

#endif /* !PARTICLES_H_ */
