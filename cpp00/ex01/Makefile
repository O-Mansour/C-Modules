# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omansour <omansour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 23:56:03 by omansour          #+#    #+#              #
#    Updated: 2023/11/05 07:30:23 by omansour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp Contact.cpp PhoneBook.cpp

OBJS		=	${SRCS:.cpp=.o}

CXX			=	c++

CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

NAME		=	phonebook

all		:	${NAME}

${NAME}	:	${OBJS}
	${CXX} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
