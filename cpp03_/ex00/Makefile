# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 20:20:29 by omansour          #+#    #+#              #
#    Updated: 2023/11/26 09:40:59 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SRCS		=	main.cpp ClapTrap.cpp

OBJS		=	main.o ClapTrap.o

CXX			=	c++

CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME		=	ClapTrap

all		:	${NAME}

${NAME}	:	${OBJS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
