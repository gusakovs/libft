# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 15:28:37 by mgusakov          #+#    #+#              #
#    Updated: 2022/01/14 15:37:37 by mgusakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC	=	gcc
CFLAGS	=	-Wextra -Werror -Wall

# dirs
FT_DIR	=	ft/
GNL_DIR	=	gnl/
OBJ_DIR	=	obj/
A	=	$(wildcard *.a)

all:		$(NAME)

$(NAME):	
		@$(MAKE) -C $(FT_DIR)
		@cp $(FT_DIR)/ft.a ./
		@$(MAKE) -C $(GNL_DIR)
		@cp $(GNL_DIR)/gnl.a ./
		@ar rc $(NAME) $(NAME)
		@ranlib $(NAME)
		@echo "[LIBFT] Library Created"

clean:		
		@make -C $(FT_DIR) clean
		@make -C $(GNL_DIR) clean
		
fclean:		clean
		@rm -f $(A)
		@echo "[LIBFT] Execultable removed"

re:		fclean all

.PHONY:		all clean fclean re $(NAME)
