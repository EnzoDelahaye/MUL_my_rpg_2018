##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

NAME	= my_rpg

CC	= gcc -g

RM	= rm -f

SRCS	= ./src/main.c 				\
	  ./src/music_maestro.c 		\
	  ./src/room/change_room.c 		\
	  ./src/event/event.c 			\
	  ./src/event/event2.c 			\
	  ./src/keys.c 					\
	  ./src/my/my_put_help.c 		\
	  ./src/my/my_putchar.c 		\
	  ./src/my/my_putstr.c 			\
	  ./src/my/text.c 				\
	  ./src/my/my_strcmp.c 			\
	  ./src/my/my_int_to_str.c 		\
	  ./src/open_a_window.c 		\
	  ./src/load_sprite.c 			\
	  ./src/load_sprite_2.c			\
	  ./src/room/disp_room.c 		\
	  ./src/room/disp_room2.c 		\
	  ./src/init_part.c				\
	  ./src/particules.c			\
	  ./src/inventory.c 			\
	  ./src/inventory2.c 			\
	  ./src/init_struct.c 			\
	  ./src/room/draw_parral.c		\
	  ./src/room/counter.c			\
	  ./src/fighting.c			\
	  ./src/fighting2.c			\
	  ./src/room/change_room2.c		\

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

FLAGS =  -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(FLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
