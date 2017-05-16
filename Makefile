# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 13:18:07 by yherrera          #+#    #+#              #
#    Updated: 2017/05/15 21:41:08 by yherrera         ###   ########.fr        #
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

HDRS = hdrs/nqueens.h \

OBJS = 	main.o \
		nq_getsolution.o \
		nq_newlist.o \
		nq_listdel.o

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
