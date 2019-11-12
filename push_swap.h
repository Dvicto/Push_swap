/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:54:55 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/12 17:01:23 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

typedef struct		s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_2_stacks
{
	t_stack			*a;
	t_stack			*b;
	t_stack			*start_a;
	t_stack			*start_b;
}					t_2_stacks;

t_stack				*new_stack(void);
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