# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 16:26:59 by omansour          #+#    #+#              #
#    Updated: 2023/11/24 16:27:51 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME		=	ScavTrap

all		:	${NAME}

${NAME}	:	${OBJS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
