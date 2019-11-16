/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:54:55 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 16:27:49 by dvictor          ###   ########.fr       */
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
