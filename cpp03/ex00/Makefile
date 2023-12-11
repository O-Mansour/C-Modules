# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 20:20:29 by omansour          #+#    #+#              #
#    Updated: 2023/11/28 17:27:38 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp ClapTrap.cpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME		=	ClapTrap

all		:	${NAME}

${NAME}	:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o		:	%.cpp ClapTrap.hpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
