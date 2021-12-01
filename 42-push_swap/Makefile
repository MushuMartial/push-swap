NAME = push_swap

SRCS = push_mv.c push_mv2.c push_mv3.c push_swap_utils.c push_swap.c algo.c algo2.c fill.c stack_utils.c checkers.c

OBJS = ${SRCS:.c=.o}

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): 
	gcc  $(CFLAGS) $(SRCS)  -o $(NAME)

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all