# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msayed <msayed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 08:26:13 by msayed            #+#    #+#              #
#    Updated: 2024/01/28 08:44:26 by msayed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.c srcs

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g 

LIBFT = ./libft
LIBS = /include

RM = rm -f
FILES = push_swap.c \
		input_error.c \
		linked_list_a.c \
		linked_list_b.c \
		sorting.c \
		moves_swap.c \
		check_list.c \
		sort_four.c \
		sort_three.c \
		sort_two.c \
		moves_rotate.c \
		moves_rev_rotate.c \
		moves_push.c \
		find_cheapest.c \
		check_max_min_b.c \
		check_max_min_a.c \
		checks_cheapest.c \
		free_all.c \
		move_back.c \
		new_min_stack_a.c \
		new_max_stack_a.c \
		new_elem_stack_a.c \
		new_in_stack_b.c

OBJ_DIR = o_files

OBJS = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I.$(LIBS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(OBJS) $(CFLAGS) $(LIBFT)/libft.a -o $(NAME)


$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
