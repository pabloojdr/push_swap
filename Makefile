NAME = push_swap

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = push_swap.c stack_utils.c
OBJS = $(SRC:.c=.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

all: pushswap
pushswap: libft ft_printf $(OBJS)
	@ $(CC) $(FLAGS) -o $(NAME) $(OBJS) libft/*.o ft_printf/*.o

libft:
	@ make -C libft/

ft_printf:
	@ make -C ft_printf/

clean:
	@ $(RM) $(OBJS)
	@ make -C libft/ clean
	@ make -C ft_printf/ clean

fclean: clean
	@ $(RM) $(NAME)
	@ make -C libft/ fclean
	@ make -C ft_printf/ fclean

re: fclean all

.PHONY: all libft ft_printf clean fclean re