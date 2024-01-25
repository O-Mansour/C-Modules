# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 22:51:32 by omansour          #+#    #+#              #
#    Updated: 2024/01/13 18:15:16 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Span.cpp

INCLUDES	=	Span.hpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	ONE

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
