# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 22:19:29 by tviejo            #+#    #+#              #
#    Updated: 2024/08/13 22:34:15 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombieHorde

SRCS		=	main.cpp
SRCS		+=	Zombie.cpp
SRCS		+=	zombieHorde.cpp

OBJ_DIR     = objs/

OBJS		=	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRCS))

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re