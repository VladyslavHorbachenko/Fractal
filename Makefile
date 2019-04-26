# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/23 14:56:50 by vlahorba          #+#    #+#              #
#    Updated: 2019/04/23 14:57:02 by vlahorba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractal
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
HEADERS = includes/fractol.h
LIBFT = Libft/libft.a
MINILIBX = minilibx_macos/liblmx.a
OBJ=$(SRC:.c=.o)
GREEN = \033[1;32m

all : $(NAME)

$(NAME) : $(LIBFT) $(MINILIBX) $(OBJ)
		Make -C Libft
		Make -C minilibx_macos
		$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L. $(LIBFT) -L ./minilibx_macos -lmlx -framework OpenGL -framework AppKit

		@echo "$(GREEN)Project successfully compiled"

$(OBJ): $(LIBFT)
		$(CC) $(FLAGS) -c $(SRC)
$(LIBFT):
		make Libft
$(MINILIBX):
		make minilibx_macos


clean :
		-rm -f $(OBJ)
		@echo "$(GREEN)All object files are deleted"

fclean : clean
		make fclean -C Libft
		-rm -f $(NAME)
		@echo "$(GREEN)Cleaned everything"

re: fclean all
