NAME = rush-02
SRC = ft_isnumber.c ft_file_size.c ft_putstr.c ft_strcmp.c ft_dict.c ft_strdup.c list.c ft_convert.c main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all: 		$(NAME)

$(NAME): 	$(SRC)
		$(CC) $(SRC) -o $(NAME)

clean:		
		rm $(NAME)

fclean: 	clean

re:		fclean all


