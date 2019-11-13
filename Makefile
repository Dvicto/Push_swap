# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 16:42:57 by dvictor           #+#    #+#              #
#    Updated: 2019/11/13 16:48:58 by dvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra
NAME = push_swap.a
SRC = ./check_sort.c \
./creation.c \
./pa_pb.c \
./ra_rb_rr.c \
./rra_rrb_rrr.c \
./sa_sb_ss.c \
./search_med.c \
./sort_1.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(SRC)
	make -C libft
	cp libft/libft.a push_swap.a
	gcc  -c -g $(SRC) -I push_swap.h -I libft/libft.h
	ar -rc $(NAME) $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f libft/libft.a
	rm -f libft.a
	rm -f push_swap.a
	rm -f $(NAME)

clean:
	make -C libft clean
	rm -f $(OBJ)

re: fclean all