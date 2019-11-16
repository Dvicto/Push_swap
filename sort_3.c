/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 20:55:33 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:44:05 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_31(t_2_stacks *stacks, int p, int v, int t)
{
	if (v < t)
	{
		if (p < t)
			p_sa(stacks);
		else
			p_rra(stacks);
	}
	else
	{
		p_sa(stacks);
		p_rra(stacks);
	}
}

void		sort_3(t_2_stacks *stacks)
{
	int		p;
	int		v;
	int		t;

	p = stacks->a->value;
	v = stacks->a->next->value;
	t = stacks->a->next->next->value;
	if (p < v)
	{
		if (v > t)
		{
			if (p < t)
			{
				p_sa(stacks);
				p_ra(stacks);
			}
			else
				p_ra(stacks);
		}
	}
	else
		sort_31(stacks, p, v, t);
}
