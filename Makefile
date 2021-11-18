# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migonzal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 09:47:58 by migonzal          #+#    #+#              #
#    Updated: 2021/10/14 10:03:08 by migonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_next_line.c get_next_line_utils.c



OBJS = ${SRCS:.c=.o}

HDRS = get_next_line.h

NAME = get_next_line.a

cc = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:	${HDRS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re
