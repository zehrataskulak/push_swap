NAME = push_swap

SRCS = push_swap.c \
	z_push_functions.c z_reverse_functions.c z_rotate_functions.c z_swap_functions.c

OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.a ft_printf/libftprintf.a


all : $(LIBS) $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) $(LIBS) -o $(NAME)

$(LIBS):
	$(MAKE) -C libft bonus
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re