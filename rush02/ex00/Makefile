# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 17:28:04 by dmodrzej          #+#    #+#              #
#    Updated: 2024/02/04 19:16:46 by dmodrzej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02

SRCS	= main_DM.c

OBJS	= ${SRC:.c=.o}

FLAGS 	= -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc ${FLAGS} ${SRCS} -o ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean