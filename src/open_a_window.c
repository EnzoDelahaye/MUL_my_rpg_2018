/*
** EPITECH PROJECT, 2019
** open_a_window
** File description:
** 2018
*/

#include "rpg.h"

void draw_player(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {550, 340};
    sfVector2f pos_lose = {540, 240};

    sfSprite_setPosition(draw->life_print, pos_lose);
    if (draw->turn_player == 0) {
        sfSprite_setPosition(draw->player3, pos);
        sfRenderWindow_drawSprite(window, draw->player3, NULL);
    }
    if (draw->turn_player == 1) {
        sfSprite_setPosition(draw->player4, pos);
        sfRenderWindow_drawSprite(window, draw->player4, NULL);
    }
    if (draw->turn_player == 2) {
        sfSprite_setPosition(draw->player2, pos);
        sfRenderWindow_drawSprite(window, draw->player2, NULL);
    }
    if (draw->turn_player == 3) {
        sfSprite_setPosition(draw->player1, pos);
        sfRenderWindow_drawSprite(window, draw->player1, NULL);
    }
}

void open_a_window(sfRenderWindow *window, int female)
{
    draw_t *draw = malloc(sizeof(draw_t));
    ticles_t *ticles = init_particles(draw, 6);

    init_struct(draw, female);
    draw_all_menu(draw);
    while (sfRenderWindow_isOpen(window)) {
        counter_parral(draw);
        (draw->menu == 0 || draw->pause == 1) ? display_menu(window, draw) :
        (draw->menu == 4) ? open_settings(window, draw) :
        (draw->menu == 1) ? open_prof(window, draw) :
        (draw->menu == 2) ? display_street(window, draw, ticles) :
        (draw->menu == 3) ? display_hall(window, draw) :
        (draw->menu == 5) ? disp_aeroom(window, draw) :
        (draw->menu == 6) ? disp_big_room(window, draw) :
        (draw->menu == 7) ? disp_game_over(window, draw) : 0;
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
    }
}

void draw_all_menu(draw_t *draw)
{
    draw->menu_sprite = sfSprite_create();
    draw->menu_text = sfTexture_createFromFile("spri/load.png", NULL);
    sfSprite_setTexture(draw->menu_sprite, draw->menu_text, sfTrue);
    draw->play = sfSprite_create();
    draw->play_text = sfTexture_createFromFile("spri/Play.png", NULL);
    sfSprite_setTexture(draw->play, draw->play_text, sfTrue);
    draw->quit = sfSprite_create();
    draw->quit_text = sfTexture_createFromFile("spri/Quit.png", NULL);
    sfSprite_setTexture(draw->quit, draw->quit_text, sfTrue);
    draw->back = sfSprite_create();
    draw->back_text = sfTexture_createFromFile("spri/Street.png", NULL);
    sfSprite_setTexture(draw->back, draw->back_text, sfTrue);
    draw->player1 = sfSprite_create();
    draw->player1_text = sfTexture_createFromFile("spri/p/player1.png", NULL);
    sfSprite_setTexture(draw->player1, draw->player1_text, sfTrue);
    draw->player2 = sfSprite_create();
    draw->player2_text = sfTexture_createFromFile("spri/p/player2.png", NULL);
    sfSprite_setTexture(draw->player2, draw->player2_text, sfTrue);
    draw_all_menu_2(draw);
}

void draw_all_menu_2(draw_t *draw)
{
    draw->prof1_spri = sfSprite_create();
    draw->prof1_text = sfTexture_createFromFile("spri/prof1.png", NULL);
    sfSprite_setTexture(draw->prof1_spri, draw->prof1_text, sfTrue);
    draw->prof2_spri = sfSprite_create();
    draw->prof2_text = sfTexture_createFromFile("spri/prof2.png", NULL);
    sfSprite_setTexture(draw->prof2_spri, draw->prof2_text, sfTrue);
    draw->prof3_spri = sfSprite_create();
    draw->prof3_text = sfTexture_createFromFile("spri/prof3.png", NULL);
    sfSprite_setTexture(draw->prof3_spri, draw->prof3_text, sfTrue);
    draw->prof4_spri = sfSprite_create();
    draw->prof4_text = sfTexture_createFromFile("spri/prof4.png", NULL);
    sfSprite_setTexture(draw->prof4_spri, draw->prof4_text, sfTrue);
    draw->prof5_spri = sfSprite_create();
    draw->prof5_text = sfTexture_createFromFile("spri/prof5.png", NULL);
    sfSprite_setTexture(draw->prof5_spri, draw->prof5_text, sfTrue);
    draw->menu = 0;
    draw->pause = 0;
    draw->x = -950;
    draw->y = -150;
    draw_all_menu_3(draw);
}

void draw_all_menu_3(draw_t *draw)
{
    draw->turn_player = 0;
    draw->clock = sfClock_create();
    draw->block = 0;
    draw->settings = sfSprite_create();
    draw->set_tings = sfTexture_createFromFile("spri/Settings.png", NULL);
    sfSprite_setTexture(draw->settings, draw->set_tings, sfTrue);
    draw->page_sett = sfSprite_create();
    draw->page_settings = sfTexture_createFromFile("spri/set_page.png", NULL);
    sfSprite_setTexture(draw->page_sett, draw->page_settings, sfTrue);
    draw->player3 = sfSprite_create();
    draw->player3_text = sfTexture_createFromFile("spri/p/player3.png", NULL);
    sfSprite_setTexture(draw->player3, draw->player3_text, sfTrue);
    draw->school = sfSprite_create();
    draw->school_text = sfTexture_createFromFile("spri/school.png", NULL);
    sfSprite_setTexture(draw->school, draw->school_text, sfTrue);
    draw->player4 = sfSprite_create();
    draw->player4_text = sfTexture_createFromFile("spri/p/player4.png", NULL);
    sfSprite_setTexture(draw->player4, draw->player4_text, sfTrue);
    draw_all_menu_4(draw);
}
