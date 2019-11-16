/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:24:21 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 18:50:13 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_2_stacks *stacks)
{
	t_border	*border;
	choose_algos(stacks);
	border = search_border(stacks);
	all_to_b(border, stacks);
	algos_for_more_elems(stacks);
}

void	algos_for_more_elems(t_2_stacks *stacks)
{
	t_stack	*b_stack_to_move;
	t_stack	*a_stack_to_move;

	while (stacks->b)
	{
		choose_best_a_b_stacks_to_move(stacks, \
		&(a_stack_to_move), &(b_stack_to_move));
		move_stacks_a_b_to_top(stacks, a_stack_to_move, b_stack_to_move);
		if (stacks->b)
			p_pa(stacks);
	}
	move_stack_a_to_top(stacks, min_elem_of_stack(stacks->a));
}

t_stack	*stack_a_to_put_b_on_it(t_2_stacks *push, t_stack *b)
{
	t_stack	*a;
	t_stack	*res_a;
	int		nb;
	int		na;

	nb = b->value;
	a = push->a;
	res_a = NULL;
	while (a)
	{
		na = a->value;
		res_a = (na > nb) ? a : res_a;
		a = a->next;
	}
	if (!res_a)
		return (on_min_elem_a(push));
	a = push->a;
	while (a)
	{
		na = a->value;
		if (res_a->value > nb && res_a->value > na && na > nb)
			res_a = a;
		a = a->next;
	}
	return (res_a);
}

t_stack	*on_min_elem_a(t_2_stacks *push)
{
	t_stack	*tmp;
	int		i;
	int		n;
	int		min_tmp;

	i = 0;
	n = 0;
	tmp = push->a;
	min_tmp = tmp->value;
	while (tmp)
	{
		if (tmp->value < min_tmp)
		{
			n = i;
			min_tmp = tmp->value;
		}
		i++;
		tmp = tmp->next;
	}
	tmp = elem_n_of_stack(push->a, n);
	return (tmp ? tmp : push->a);
}
