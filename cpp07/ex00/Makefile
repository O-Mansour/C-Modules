# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 23:04:05 by omansour          #+#    #+#              #
#    Updated: 2023/12/25 23:32:36 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp

INCLUDES	=	whatever.hpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	ZERO

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
