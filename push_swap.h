/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:54:55 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:16:51 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft/libft.h"
# define INT_MAX (2147483647)
# define INT_MIN (-2147483648)
# define LONG_MAX (9223372036854775807)

typedef struct		s_border
{
	int				min;
	int				max;
	int				med;
}					t_border;


typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_2_stacks
{
	t_stack			*a;
	t_stack			*b;
}					t_2_stacks;

int					write_error();
void				add_a(t_2_stacks *stacks, int num);
void				free_all(t_2_stacks *stacks, char ***numbers);
void				error_checker_stder(t_2_stacks *stacks, char *str);
void				checker_stdin(t_2_stacks *stacks, char *str);
void				free_stacks(t_2_stacks *stacks);
void				checker_stdin(t_2_stacks *stacks, char *str);
t_stack				*new_stack(t_stack *stack);
void				sa(t_2_stacks *stacks);
void				sb(t_2_stacks *stacks);
void				ss(t_2_stacks *stacks);
void				pa(t_2_stacks *stacks);
void				pb(t_2_stacks *stacks);
void				ra(t_2_stacks *stacks);
void				rb(t_2_stacks *stacks);
void				rr(t_2_stacks *stacks);
void				rra(t_2_stacks *stacks);
void				rrb(t_2_stacks *stacks);
void				rrr(t_2_stacks *stacks);

int					search_med(t_2_stacks *stacks);
t_border			*search_border(t_2_stacks *stacks);
int					check_sort(t_2_stacks *stacks);
int					check_count(t_2_stacks *stacks);
void				push_swap(t_2_stacks *stacks);

void				p_pb(t_2_stacks *stacks);
void				p_pa(t_2_stacks *stacks);
void				p_ra(t_2_stacks *stacks);
void				p_rb(t_2_stacks *stacks);
void				p_rr(t_2_stacks *stacks);
void				p_sa(t_2_stacks *stacks);
void				p_sb(t_2_stacks *stacks);
void				p_ss(t_2_stacks *stacks);
void				p_rra(t_2_stacks *stacks);
void				p_rrb(t_2_stacks *stacks);
void				p_rrr(t_2_stacks *stacks);

void				free_all_and_exit(t_2_stacks *stacks, t_border *border);
void				fix_ost_a(t_2_stacks *stacks, t_border *border);
void				all_to_b(t_2_stacks *stacks);
void				algos_for_2_elems(t_2_stacks *stacks);
void				choose_algos(t_2_stacks *stacks);
int					kol_vo_elementov_v_stacke(t_stack *stack);
int					n_operations_to_up_b_by_rrb(t_2_stacks *push, t_stack *b);
int					n_operations_to_up_b_by_rb(t_2_stacks *push, t_stack *b);
int					n_operations_to_up_a_by_rra(t_2_stacks *push, t_stack *a);
int					n_operations_to_up_a_by_ra(t_2_stacks *push, t_stack *a);
void				move_stack_a_to_top(t_2_stacks *push, t_stack *a);
void				move_stack_b_to_top(t_2_stacks *push, t_stack *b);
void				move_stacks_a_b_to_top(t_2_stacks *push, t_stack *a, t_stack *b);
int					number_operations_to_put_b_to_a(t_2_stacks *push, t_stack *a, t_stack *b);
void				choose_best_a_b_stacks_to_move(t_2_stacks *push, \
					t_stack **a_stack_to_move, t_stack **b_stack_to_move);
t_stack				*elem_n_of_stack(t_stack *stack, int n);
int					number_operations_to_put_b_to_a(t_2_stacks *push, t_stack *a, t_stack *b);
int					min_of_2(int a, int b);
t_stack				*min_elem_of_stack(t_stack *stack);
void				algos_for_more_elems(t_2_stacks *stacks);
void				choose_best_a_b_stacks_to_move(t_2_stacks *push, \
t_stack 			**a_stack_to_move, t_stack **b_stack_to_move);
t_stack				*stack_a_to_put_b_on_it(t_2_stacks *push, t_stack *b);
t_stack				*on_min_elem_a(t_2_stacks *push);
void				rra_n_times(t_2_stacks *stacks, int i);
void				rrb_n_times(t_2_stacks *stacks, int i);
void				rrr_n_times(t_2_stacks *stacks, int i);
void				ra_n_times(t_2_stacks *stacks, int i);
void				rb_n_times(t_2_stacks *stacks, int i);
void				rr_n_times(t_2_stacks *stacks, int i);
void				sort_3(t_2_stacks *stacks);
