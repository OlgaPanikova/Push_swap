NAME = push_swap
SRC = swap_function.c swap_function_2.c push_functions.c check_functions.c optional_function.c array_functions.c butterfly.c exceptions.c
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft
LIBFTA = $(LIBFT)/libft.a
LIBS = -L$(LIBFT) -lft

all: $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFTA) $(OBJ) push_swap.c
	$(CC) $(CFLAGS) $(OBJ) push_swap.c $(LIBS) -o $(NAME)

$(LIBFTA):
	@$(MAKE) -C $(LIBFT)

clean:
	$(RM) $(OBJ)
	@$(MAKE) -C $(LIBFT) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT) fclean

re: fclean all

.PHONY : all clean fclean re
