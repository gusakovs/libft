NAME	=	libft.a
SRC		=	ft_toupper.c	\
			ft_tolower.c	\
			ft_isdigit.c	\
			ft_isalpha.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\

OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all