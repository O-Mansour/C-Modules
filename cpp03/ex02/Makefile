# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 16:26:59 by omansour          #+#    #+#              #
#    Updated: 2023/11/29 00:47:51 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

INCLUDES	=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME		=	FragTrap

all		:	${NAME}

${NAME}	:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

%.o		:	%.cpp ${INCLUDES}
	${CXX} ${CXXFLAGS} -c $< -o $@

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
