/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:16:46 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:46:02 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/get_next_line/get_next_line.h"
# include "../lib/libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_stack
{
	int				data;
	int				index;
	struct t_stack	*next;
}					t_stack;

typedef struct MyStruci
{
	int				*array;
	int				size;
	int				mid;
	int				div;
	int				offset;
	int				start;
	int				end;
}					t_param;

typedef struct s_op_data
{
	t_stack			**a;
	t_stack			**b;
	t_param			*param;
	t_stack			*tmp;
	int				max;
	int				p;
}					t_op_data;

/////////////push_swap/////////////////
int					change_arg(int argc, char ***argv);
int					creat_stack(t_stack **a, char **argv);
t_stack				*creat_new_node(char **argv, int i);
void				free_stack(t_stack **s);
int					check_dup(int argc, char **argv);
int					check_arg(int argc, char **argv);
int					check_node(t_stack *node, t_stack **a);
int					check_main(int *argc, char ***argv, int i);
int					check_argv(char **argv, int argc);
//////////////////////////////////////

//////////operations//////////////////
void				swap(t_stack **s, char c);
void				swap_s(t_stack **a, t_stack **b, int i);
void				push_to_a(t_stack **a, t_stack **b, int i);
void				push_to_b(t_stack **b, t_stack **a, int i);
void				rotate(t_stack **s, char c);
void				rotate_r(t_stack **a, t_stack **b, int i);
void				reverse_rotate(t_stack **s, char c);
void				reverse_rotate_r(t_stack **a, t_stack **b, int i);
void				set_index(t_stack *s);
//////////////////////////////////////

///////////////algo///////////////////
void				sort_three(t_stack **a, int argc);
void				sort_five(t_stack **a, t_stack **b, int argc);
void				sort(t_stack **a, t_stack **b);

void				push_max_to_a(t_stack **a, t_stack **b, int max);
void				execute_rotation_or_push(t_op_data *op_data, t_stack *last);
void				find_and_execute_operations(t_op_data *op_data);
void				sort_array(int *array, int size);
void				process_operations_based_on_conditions(t_op_data *op_data);
void				a(t_stack *tmp, t_stack **a);
int					is_stack_ascending(t_stack *a);
int					is_stack_descending(t_stack *a);
int					stack_order(t_stack **a);
int					stack_size(t_stack *s);
t_stack				*find_max(t_stack *s);
t_stack				*find_min(t_stack *s);
int					check_sorted(t_stack *a);
int					*ft_creat_array(t_stack *a, int size);
int					set_param_div(int size);
t_stack				*find_the_first_element_in_stack(t_stack *a, int start,
						int end);
void				first_part(t_param *param, t_stack **a, t_stack **b);
void				check_a(t_stack **a, int min);
t_stack				*last_node(t_stack *s);
int					check_s(t_stack *s, t_stack **tmp, int max);
void				second_part(t_param *param, t_stack **a, t_stack **b);
//////////////////////////////////////

///////////////bonus///////////////
int					verify_stack(t_stack *a);
int					run_tasks(t_stack **a, t_stack **b);
void				run_operations(char *t, t_stack **a, t_stack **b, int *c);
void				check_verify_stack(t_stack *a, t_stack *b);
void				free_argv_and_check_stack(char **argv, t_stack *a,
						t_stack *b);
void				write_error(char **argv);
//////////////////////////////////

#endif
