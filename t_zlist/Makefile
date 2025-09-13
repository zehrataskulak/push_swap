NAME = t_zlist.a

SRCS = t_zlstnew.c t_zlstadd_front.c t_zlstsize.c t_zlstlast.c t_zlstdelone.c t_zlstclear.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re