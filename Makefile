# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 02:00:45 by qhusler           #+#    #+#              #
#    Updated: 2016/01/24 16:30:21 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
FLAG = -Wall -Werror -Wextra
SRC = main.c \
		ft_check_tetriminos.c \
		ft_place_tetriminos.c
OBJ = $(SRC_NAME:.c=.o)
HDR = -I./
LIBLINK = ~/workspace/New\ Folder/libft
RM = rm -f

all: $(NAME)

$(NAME):
	make -C $(LIBLINK)
	#cd ./libft; mv libft.a ../
	$(CC) $(FLAG) $(SRC) -o $(NAME) -L. -lft -I ./include

#clean:
	#@$(RM)

#fclean: clean
	#@$(RM) $(NAME)

re: fclean all
