# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math <math@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 21:52:20 by math42            #+#    #+#              #
#    Updated: 2024/04/22 13:23:00 by math             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = yellow_pages

CC = c++ -g3

SRCS =  yellow_pages.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 #-fsanitize=address

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all

test: re
	./$(NAME)