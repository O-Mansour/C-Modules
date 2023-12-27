# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 12:12:54 by omansour          #+#    #+#              #
#    Updated: 2023/12/26 21:06:55 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp

INCLUDES	=	Array.hpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	TWO

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
