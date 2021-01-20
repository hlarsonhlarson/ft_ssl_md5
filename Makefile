PHONY: clean fclean re all

FILENAMES = main.c
NAME = ft_ssl_md5 

SRCS	=$(addprefix srcs/, $(FILENAMES))

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
CFLAGS	+= -I includes/

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

re: fclean all

clean:
	@rm -rf build/

fclean: clean
	@rm -f $(NAME)
