/*
** EPITECH PROJECT, 2019
** functions prototypes
** File description:
** 2018
*/

#ifndef PROTO_H_
#define PROTO_H_

/*
**  PERSONAL LIBRARY
*/

void my_putchar(char);
int my_putstr(char const *);
int my_strcmp(char const *, char const *);
int my_put_help(void);
char *my_int_to_str(int num);

/*
**  LOAD SPRITE & OPEN WINDOW & INIT
*/

void draw_all_menu(draw_t *);
void draw_all_menu_2(draw_t *);
void draw_all_menu_3(draw_t *draw);
void draw_all_menu_4(draw_t *draw);
void draw_all_menu_5(draw_t *draw);
void draw_all_menu_6(draw_t *draw);
void draw_all_menu_7(draw_t *draw);
void open_a_window(sfRenderWindow *, int);
void init_struct(draw_t *draw, int female);

/*
**  DISPLAY SCREEN XOR ROOM
*/

void open_prof(sfRenderWindow *, draw_t *);
void open_settings(sfRenderWindow *window, draw_t *draw);
void display_menu(sfRenderWindow *, draw_t *);
void display_street(sfRenderWindow *, draw_t *, ticles_t *ticles);
void display_hall(sfRenderWindow *, draw_t *);
void disp_aeroom(sfRenderWindow *window, draw_t *);
void disp_game_over(sfRenderWindow *window, draw_t *draw);
void disp_coin(sfRenderWindow *window, draw_t *draw);
void disp_big_room(sfRenderWindow *window, draw_t *draw);
void display_inventory(sfRenderWindow *window, draw_t *draw);
void draw_player(sfRenderWindow *window, draw_t *draw);
void draw_tree(sfRenderWindow *window, draw_t *draw);
void draw_mount(sfRenderWindow *window, draw_t *draw);
void draw_back(sfRenderWindow *window, draw_t *draw);
void draw_cloud(sfRenderWindow *window, draw_t *draw);
void display_particles(sfRenderWindow *window, ticles_t *ticles, draw_t *draw);
void counter_parral(draw_t *draw);
void top_up(sfRenderWindow *window, draw_t *draw);

/*
**  CHANGE ROOM
*/

void change_room_hall2(sfRenderWindow *window, draw_t *draw);
void change_room_street3(sfRenderWindow *window, draw_t *draw);
void change_big_room(sfRenderWindow *window, draw_t *draw);
void change_room_street(sfRenderWindow *window, draw_t *draw);
void change_room_aer(sfRenderWindow *window, draw_t *draw);
void change_room_hall(sfRenderWindow *window, draw_t *draw);

/*
**  EVENT
*/

void event_game2(sfRenderWindow *window, draw_t *draw);
void event_lose(sfRenderWindow *window);
void event_settings(sfRenderWindow *window, draw_t *draw);
void event_open(sfRenderWindow *window, draw_t *draw, sfEvent event);
void event_menu(sfRenderWindow *, draw_t *);
void event_game(sfRenderWindow *, draw_t *);

/*
**  PLAYER NAVIGATION
*/

void key_left(draw_t *draw, sfRenderWindow *);
void key_right(draw_t *draw, sfRenderWindow *);
void key_up(draw_t *draw, sfRenderWindow *);
void key_down(draw_t *draw, sfRenderWindow *);

/*
**  FIGHT
*/

void fighting_aer3(sfRenderWindow *window, draw_t *draw);
void fighting_aer2(sfRenderWindow *window, draw_t *draw);
void fighting_aer(sfRenderWindow *window, draw_t *draw);
void fighting_ped(sfRenderWindow *window, draw_t *draw);

/*
**  TEXT & MUSIC
*/

int music(sfMusic *music, char *filepath, int volume);
void print_text(sfRenderWindow *window, char *content, int x, int y);
void print_text2(sfRenderWindow *window, char *content, int x, int y);


/*
**  PARTICLES
*/

ticles_t *init_particles(draw_t *draw, int nb);
ticles_t *set_part_pos(ticles_t *ticles, draw_t *draw);
void set_pos(ticles_t *ticles, draw_t *draw);

#endif /* !PROTO_H_ */
