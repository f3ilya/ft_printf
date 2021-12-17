SRCS	= ft_printf.c\
 					ft_put_c.c ft_put_d.c ft_put_p.c\
 					ft_put_s.c ft_put_u.c ft_put_x.c

OBJS	= ${SRCS:.c=.o}

HDRS	= ft_printf.h

NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I${HDRS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
