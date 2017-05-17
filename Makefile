# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thewrenchess <thewrenchess@student.42.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 13:18:07 by yherrera          #+#    #+#              #
#    Updated: 2017/05/17 12:14:44 by thewrenchess     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MK = make

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Ofast

NAME = nqueens

SRCS = 	srcs/main.c \
		srcs/nq_getsolution.c \
		srcs/nq_newlist.c \
		srcs/nq_listdel.c \
		srcs/nq_writetofile.c \

HDRS = hdrs

OBJS = 	main.o \
		nq_getsolution.o \
		nq_newlist.o \
		nq_listdel.o \
		nq_writetofile.o \

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS) -I $(HDRS)
	@$(CC) -o $(NAME) $(OBJS)
	@$(MK) clean

all: $(NAME)

clean:
	@/bin/rm -f $(OBJS)

fclean:
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
