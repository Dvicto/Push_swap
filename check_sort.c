/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:57:56 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:30:49 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_sort(t_2_stacks *stacks)
{
	int		tmp;
	t_stack	*tmpa;

	if (stacks->b)
		return (0);
	tmp = stacks->a->value;
	tmpa = stacks->a->next;
	while (tmpa)
	{
		if (tmpa->value <= tmp)
			return (0);
		tmp = tmpa->value;
		tmpa = tmpa->next;
	}
	return (check_count(stacks));
}

int		check_count(t_2_stacks *stacks)
{
	int		tmp;
	t_stack *temp;
	t_stack *temp2;

	temp2 = stacks->a;
	temp = stacks->a->next;
	while (temp2)
	{
		tmp = temp2->value;
		temp = temp2->next;
		while (temp)
		{
			if (temp->value == tmp)
				return (0);
			temp = temp->next;
		}
		temp2 = temp2->next;
	}
	return (1);
}
