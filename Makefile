NAME = pushswap

SRCS = push_swap_mv.c push_swap_utils.c push_swap.c algo.c algo2.c

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