# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:59:54 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/25 19:54:16 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC	=	gcc
CFLAGS	=	-Wextra -Werror -Wall

# directories
FT_DIR	=	ft/
SRC_DIR	=	./
GNL_DIR	=	gnl/
OBJ_DIR	=	obj/
INC_DIR	=	inc/

# files
SRC :=	$(wildcard $(FT_DIR)*.c) 
SRC +=	$(wildcard $(GNL_DIR)*.c)
OBJ :=	$(notdir $(SRC))
OBJ :=	$(patsubst %, $(OBJ_DIR)%, $(OBJ:.c=.o))

all:		
		@make $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "[FT] Library created"

$(OBJ_DIR)%.o: $(SRC_DIR)*/%.c
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
		@rm -rf $(OBJ_DIR)
		@echo "[FT] Object Folder Removed"

fclean:		clean
		@rm -f $(NAME)
		@echo "[FT] Executable Removed"

re:		fclean all

.PHONY:		all clean fclean re $(NAME)
