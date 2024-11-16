CFILES = ft_printf.c ft_printf_utils.c ft_printf_unsigned.c

OFILES = $(CFILES:.c=.o)

CC = clang
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra

%.o : %.clang
	$(CC) $(CFLAGS) .c $< -o $@

all: $(NAME)
$(NAME): $(OFILES)
	@ ar rcs $(NAME) $(OFILES)

clean:
	@ rm  -f $(OFILES)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re