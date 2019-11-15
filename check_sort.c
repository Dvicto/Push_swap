/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:57:56 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 16:08:18 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_sort(t_2_stacks *stacks)
{
	int		tmp;

	if (stacks->b)
		return (0);
	tmp = stacks->start_a->value;
	stacks->a = stacks->start_a->next;
	while (stacks->a)
	{
		if (stacks->a->value <= tmp)
			return (0);
		stacks->a = stacks->a->next;
	}
	return (check_count(stacks));
}

int		check_count(t_2_stacks *stacks)
{
	int		tmp;
	t_stack *temp;
	
	stacks->a = stacks->start_a;
	temp = stacks->start_a->next;
	while (stacks->a)
	{
		tmp = stacks->a->value;
		while (temp)
		{
			if (temp->value == tmp)
			return (0);
			temp = temp->next;
		}
		stacks->a = stacks->a->next;
	}
	return (1);

}