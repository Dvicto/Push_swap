/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 21:32:09 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/20 16:16:27 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdlib.h"

t_stack		*new_stack(t_stack *stack)
{
	if(!(stack = (t_stack *)malloc(sizeof(t_stack))))
		exit(0);
	stack->next = NULL;
	stack->value = 0;
	return (stack);
}

void		add_a(t_2_stacks *stacks, int num)
{
	static int	qwert = 0;
	t_stack		*tmp;

	if (qwert == 0)
	{
		stacks->a = new_stack(stacks->a);
		stacks->a->value = num;
		qwert++;
		return ;
	}
	tmp = stacks->a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_stack(tmp->next);
	tmp = tmp->next;
	tmp->value = num;
	return ;
}
