NAME = push_swap

SRCS = push_swap.c 

OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.a ft_printf/libftprintf.a z_list/z_list.a


all : $(LIBS) $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) $(LIBS) -o $(NAME)

$(LIBS):
	$(MAKE) -C libft bonus
	$(MAKE) -C ft_printf
	$(MAKE) -C z_list

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean
	$(MAKE) -C z_list clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean
	$(MAKE) -C z_list fclean

re: fclean all

.PHONY: all clean fclean re