NAME		=   Sort

SRCS	    =   main.cpp
SRCS	    +=  PmergeMe.cpp
SRCS	    +=  Timer.cpp

OBJ_DIR     = objs/

OBJS		=	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRCS))

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3

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