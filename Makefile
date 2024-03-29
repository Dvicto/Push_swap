# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 16:42:57 by dvictor           #+#    #+#              #
#    Updated: 2019/11/26 14:37:58 by dvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker

NAME2 = push_swap

NAME = $(NAME1) $(NAME2)

MAKE = make

FLAGS = -Wall -Wextra -Werror

SRCS1 = creation.c pa_pb.c checker_1.c check_sort.c errors.c ra_rb_rr.c rra_rrb_rrr.c sa_sb_ss.c

SRCS2 = push_swap_start.c errors.c ra_rb_rr.c rra_rrb_rrr.c sa_sb_ss.c pa_pb.c creation.c push_swap1.c \
		write_op1.c write_op2.c write_op3.c check_sort.c push_swap2.c n_operations_to_up.c push_swap3.c move_stacks.c write_op4.c \
		write_op5.c sort_3.c

HEADER = push_swap.h

OBJS1 = $(SRCS1:.c=.o)

OBJS2 = $(SRCS2:.c=.o)

LIBFT = ./libft/libft.a

all: $(NAME1) $(NAME2)

$(NAME1): $(OBJS1) $(HEADER)
	make -C libft/
	gcc $(FLAGS) ./libft/libft.a $(OBJS1) -o $(NAME1)

$(NAME2): $(OBJS2) $(HEADER)
	gcc $(FLAGS) ./libft/libft.a $(OBJS2) -o $(NAME2)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $*.c -o $@

g:
	@gcc ./libft/libft.a $(SRCS1) -g -o $(NAME1)
	@gcc ./libft/libft.a $(SRCS2) -g -o $(NAME2)

clean:
	@$(MAKE) -C ./libft clean
	@rm -f *.o

fclean: clean lib
	@rm -f $(NAME1)
	@rm -f $(NAME2)

re: fclean  lib all

lib:
	@$(MAKE) -C ./libft fclean
