# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 06:22:01 by zelkalai          #+#    #+#              #
#    Updated: 2024/03/25 13:19:36 by zelkalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
NAME_B = checker
CFLAGS = -Wall -Wextra -Werror

LIBFT_SRC = ./lib/libft
LIBFT_INC = $(LIBFT_SRC)/libft.h
LIBFT = $(LIBFT_SRC)/libft.a

source = ./utils/change_arg.c\
				./utils/check_arg.c\
				./utils/check_argv.c\
				./utils/check_dup.c\
				./utils/check_node.c\
				./utils/creat_new_node.c\
				./utils/creat_stack.c\
				./utils/free_stack.c\
				./utils/push_swap.c\
				./utils/check_main.c\
				./operations/push_to_a.c\
				./operations/push_to_b.c\
				./operations/reverse_rotate.c\
				./operations/rotate.c\
				./operations/set_index.c\
				./operations/swap.c\
				./algo/a.c\
				./algo/check_a.c\
				./algo/check_s.c\
				./algo/check_sorted.c\
				./algo/execute_rotation_or_push.c\
				./algo/find_and_execute_operations.c\
				./algo/find_max.c\
				./algo/find_min.c\
				./algo/find_the_first.c\
				./algo/first_part.c\
				./algo/ft_creat_array.c\
				./algo/is_stack_ascending.c\
				./algo/is_stack_descending.c\
				./algo/last_node.c\
				./algo/process_operations.c\
				./algo/push_max_to_a.c\
				./algo/second_part.c\
				./algo/set_param_div.c\
				./algo/sort_array.c\
				./algo/sort.c\
				./algo/sort_five.c\
				./algo/sort_three.c\
				./algo/stack_order.c\
				./algo/stack_size.c\


source_bonus = ./utils/change_arg.c\
							./utils/check_arg.c\
							./utils/check_argv.c\
							./utils/check_dup.c\
							./utils/check_main.c\
							./utils/check_node.c\
							./utils/creat_new_node.c\
							./utils/creat_stack.c\
							./utils/free_stack.c\
							./operations/push_to_a.c\
							./operations/push_to_b.c\
							./operations/reverse_rotate.c\
							./operations/rotate.c\
							./operations/set_index.c\
							./operations/swap.c\
							./algo/a.c\
							./algo/check_a.c\
							./algo/check_s.c\
							./algo/check_sorted.c\
							./algo/execute_rotation_or_push.c\
							./algo/find_and_execute_operations.c\
							./algo/find_max.c\
							./algo/find_min.c\
							./algo/find_the_first.c\
							./algo/first_part.c\
							./algo/ft_creat_array.c\
							./algo/is_stack_ascending.c\
							./algo/is_stack_descending.c\
							./algo/last_node.c\
							./algo/process_operations.c\
							./algo/push_max_to_a.c\
							./algo/second_part.c\
							./algo/set_param_div.c\
							./algo/sort_array.c\
							./algo/sort.c\
							./algo/sort_five.c\
							./algo/sort_three.c\
							./algo/stack_order.c\
							./algo/stack_size.c\
							./checker_utils/checker.c\
							./checker_utils/check_verify_stack.c\
							./checker_utils/free_argv_and_check_stack.c\
							./checker_utils/run_operations.c\
							./checker_utils/run_tasks.c\
							./checker_utils/verify_stack.c\
							./checker_utils/write_error.c\
							./lib/get_next_line/get_next_line.c\
							./lib/get_next_line/get_next_line_utils.c

obj = $(source:.c=.o)

obj_bonus = $(source_bonus:.c=.o)

all:$(NAME)

$(NAME): $(obj) $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT_INC) $(obj) $(LIBFT) -o $(NAME)

$(LIBFT): $(LIBFT_SRC)/*.c $(LIBFT_INC)
	make -C ./lib/libft/

bonus: $(NAME_B)

$(NAME_B):$(obj_bonus) $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT_INC) $(obj_bonus) $(LIBFT) -o $(NAME_B)

clean	:
	rm -fr $(obj) $(obj_bonus)
	make -C ./lib/libft clean

fclean	: clean
	rm -fr $(NAME) $(NAME_B)
	make -C ./lib/libft fclean

re: fclean all

.PHONY: all clean fclean re bonus
