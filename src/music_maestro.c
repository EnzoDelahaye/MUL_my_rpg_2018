/*
** EPITECH PROJECT, 2018
** music
** File description:
** maestro
*/

#include "rpg.h"

int music(sfMusic *music, char *filepath, int volume)
{
    music = sfMusic_createFromFile(filepath);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    sfMusic_setVolume(music, volume);
    return (0);
}
