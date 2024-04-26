# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 21:52:20 by math42            #+#    #+#              #
#    Updated: 2024/04/24 13:03:42 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bankapp

CC = c++

SRCS =  Account.cpp tests.cpp

OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.#-g3 #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.c
	$(CC) $(FLAGS) $@ $<

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

fsanitize: CFLAGS += -fsanitize=address
fsanitize: clean all

test: all
	./$(NAME)

