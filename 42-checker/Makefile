NAME = checker

SRCS = checker.c checkers.c fill.c push_swap_mv.c push_swap_utils.c stack_utils.c gnl.c gnl_utils.c

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