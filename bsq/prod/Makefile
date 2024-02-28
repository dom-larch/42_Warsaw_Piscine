# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 17:28:04 by dmodrzej          #+#    #+#              #
#    Updated: 2024/02/07 18:02:04 by dmodrzej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq

SRCS	= main.c matrix.c print.c utils.c verification.c

OBJS	= ${SRCS:.c=.o}

DEPS	= $(SRCS:.c=.h)

FLAGS 	= -Wall -Werror -Wextra -R CheckForbiddenSourceHeader

all:	${NAME}

${NAME}: ${OBJS}
	cc ${FLAGS} ${OBJS} -o ${NAME}

%.o: %.c $(DEPS)
	cc $(FLAGS) -c $< -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re