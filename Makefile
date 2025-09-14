NAME = push_swap

SRCS = push_swap.c read_arguments.c \
z_push_functions.c

OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.a ft_printf/libftprintf.a t_zlist/t_zlist.a


all : $(LIBS) $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) $(LIBS) -o $(NAME)

$(LIBS):
	$(MAKE) -C libft bonus
	$(MAKE) -C ft_printf
	$(MAKE) -C t_zlist

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean
	$(MAKE) -C t_zlist clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean
	$(MAKE) -C t_zlist fclean

re: fclean all

.PHONY: all clean fclean re