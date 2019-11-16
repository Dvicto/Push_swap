/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_operations_to_up.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:21:11 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 18:22:14 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		kol_vo_elementov_v_stacke(t_stack *stack)
{
	int	n;

	n = 0;
	if (stack)
	{
		while (stack)
		{
			stack = stack->next;
			n++;
		}
		return (n);
	}
	return (n);
}

int		n_operations_to_up_b_by_rrb(t_2_stacks *push, t_stack *b)
{
	int		kolvo;
	t_stack	*tmp;

	tmp = push->b;
	kolvo = 0;
	while (tmp != b && tmp)
	{
		tmp = tmp->next;
		kolvo++;
	}
	if (tmp == NULL)
		return (-1);
	return (kol_vo_elementov_v_stacke(push->b) - kolvo);
}

int		n_operations_to_up_b_by_rb(t_2_stacks *push, t_stack *b)
{
	int		kolvo;
	t_stack	*tmp;

	tmp = push->b;
	kolvo = 0;
	while (tmp != b && tmp)
	{
		tmp = tmp->next;
		kolvo++;
	}
	if (tmp == NULL)
		return (-1);
	return (kolvo);
}

int		n_operations_to_up_a_by_rra(t_2_stacks *push, t_stack *a)
{
	int		kolvo;
	t_stack	*tmp;

	tmp = push->a;
	kolvo = 0;
	while (tmp != a && tmp)
	{
		tmp = tmp->next;
		kolvo++;
	}
	if (tmp == NULL)
		return (-1);
	return (kol_vo_elementov_v_stacke(push->a) - kolvo);
}

int		n_operations_to_up_a_by_ra(t_2_stacks *push, t_stack *a)
{
	int		kolvo;
	t_stack	*tmp;

	tmp = push->a;
	kolvo = 0;
	while (tmp != a && tmp)
	{
		tmp = tmp->next;
		kolvo++;
	}
	if (tmp == NULL)
		return (-1);
	return (kolvo);
}
