# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:59:54 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/14 15:52:01 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft.a

CC	=	gcc
CFLAGS	=	-Wextra -Werror -Wall

# directories
SRC_DIR	=	./
OBJ_DIR	=	obj/
INC_DIR	=	../inc/

# files
SRC_FILES =	$(wildcard *.c)
OBJ_FILES = 	$(SRC_FILES:.c=.o)
SRC =		$(SRC_FILES)
OBJ =		$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "[FT] Library created"

$(OBJ):		$(SRC)
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(CFLAGS) -I $(INC_DIR) -c $^
		@mv -f *.o $(OBJ_DIR)

clean:
		@rm -rf $(OBJ_DIR)
		@echo "[FT] Object Folder Removed"

fclean:		clean
		@rm -f $(NAME)
		@echo "[FT] Executable Removed"

re:		fclean all

.PHONY:		all clean fclean re $(NAME)
