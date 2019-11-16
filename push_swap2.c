/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:36:08 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:39:57 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*elem_n_of_stack(t_stack *stack, int n)
{
	int	i;

	i = 0;
	if (!stack)
		return (NULL);
	while (i < n && stack)
	{
		stack = stack->next;
		i++;
	}
	return (stack);
}

int		min_of_2(int a, int b)
{
	if (a == b)
		return (a);
	return ((a > b) ? b : a);
}

t_stack	*min_elem_of_stack(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*min;

	tmp = stack;
	min = tmp;
	while (tmp)
	{
		if (min->value > tmp->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
