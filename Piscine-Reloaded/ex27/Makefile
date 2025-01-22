CC = gcc

CFLAGS = -Werror -Wextra -Wall

SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean
