# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 15:19:38 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/14 15:25:07 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	gnl.a

CC	=	gcc
CFLAGS	=	-Wextra -Werror -Wall

# directories
SRC_DIR	=	./
OBJ_DIR	=	obj/

# files
SRC_FILES =	$(wildcard *.c)
OBJ_FILES =	$(SRC_FILES:.c=.o)
SRC	=	$(SRC_FILES)
OBJ	=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "[GNL] Library Created"
		
$(OBJ):		$(SRC)
		@mkdir -p $(OBJ_DIR)
		@$(CC) $(CFLAGS) -c $^
		@mv -f *.o $(OBJ_DIR)

clean:		
		@rm -rf $(OBJ_DIR)
		@echo "[GNL] Object Folder Removed"

fclean: 	clean
		@rm -f $(NAME)
		@echo "[GNL] Executable Removed"

re:		fcleam all

.PHONY:		all clean fclean re $(NAME)
