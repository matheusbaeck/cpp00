# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 21:52:20 by math42            #+#    #+#              #
#    Updated: 2024/05/29 14:42:20 by math             ###   ########.fr        #
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

log:
	cat 19920104_091532.log | awk '{print$2}' | ls

out: $(NAME)
	./$(NAME) | awk '{print$2}' > out

test: all log out
	diff -s log out

