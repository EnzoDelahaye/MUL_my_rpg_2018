/*
** EPITECH PROJECT, 2019
** main
** File description:
** 2018
*/

#include "rpg.h"

int main(int ac, char **av)
{
    int female = 0;
    sfVideoMode mode = {1280, 720, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "EpiLand",
    sfResize | sfClose, NULL);
    sfMusic *my_music = NULL;

    music(my_music, "sound/SoundBand.ogg", 100);
    sfRenderWindow_setFramerateLimit(window, 30);
    if (!window)
        return (84);
    if (ac > 2)
        return (84 + my_putstr("Wrong Arguments\n"));
    if (ac == 2 && (my_strcmp("-female", av[1]) == 0))
        female = 1;
    if (ac == 2 && (my_strcmp("-h", av[1]) == 0))
        return (0 + my_put_help());
    if (ac == 1 || ac == 2)
        open_a_window(window, female);
    sfRenderWindow_destroy(window);
}
