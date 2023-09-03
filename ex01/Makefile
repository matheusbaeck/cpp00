# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: math42 <math42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 21:52:20 by math42            #+#    #+#              #
#    Updated: 2023/09/02 14:32:23 by math42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = yellow_pages

CC = c++

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