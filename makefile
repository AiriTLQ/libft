NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Librería creada: $(NAME)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilando $<"

clean:
	@rm -f $(OBJ)
	@echo "Objetos eliminados"

fclean:
	@rm -f $(NAME)
	@echo "Librería eliminada"

re: fclean all