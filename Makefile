# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2017/10/05 21:26:44 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
SRCS = $(wildcard srcs/*.c)
BINS = $(patsubst srcs/%.c, %.o, $(SRCS))
FLAGS = -g -Wall -Wextra -Werror
LIBFT = ./libft/libft.a

.PHONY: all clean fclean

%.o : libft/srcs/%.c
	gcc -Ilibft/incs $(FLAGS) -c $<

%.o : srcs/%.c
	gcc -Iincs -Ilibft/incs $(FLAGS) -c $<

all: libft $(NAME)

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): $(LIBFT) $(BINS)
	gcc -Iincs -Ilibft/incs $(FLAGS) $(LIBFT) $(BINS) checker.c -o $(NAME)

clean:
	make clean -C ./libft
	/bin/rm -f $(BINS)

fclean: clean
	make fclean -C ./libft
	/bin/rm -f $(NAME)

re: fclean all
