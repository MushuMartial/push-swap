NAME1 = push_swap

NAME2 = checker

SRCS1 = push_mv.c push_mv2.c push_mv3.c push_swap_utils.c push_swap.c algo.c algo2.c fill.c stack_utils.c checkers.c

SRCS2 = bonus_mv.c bonus_mv2.c bonus_mv3.c push_swap_utils.c bonus_main.c bonus_gnl.c bonus_gnl_utils.c checkers.c fill.c stack_utils.c 

OBJS1 = $(SRCS1:.c=.o)

OBJS2 = $(SRCS2:.c=.o)

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME1): 
	$(CC) $(CFLAGS) $(SRCS1)  -o $(NAME1)

$(NAME2):
	$(CC) $(CFLAGS) $(SRCS2)  -o $(NAME2)

all:	$(NAME1) $(NAME2)

clean:
		$(RM) $(OBJS1) $(OBJS2)

fclean:	clean
		$(RM) $(NAME1) $(NAME2)

re:		fclean all
