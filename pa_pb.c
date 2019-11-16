/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 21:39:25 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:39:32 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_2_stacks *stacks)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	if (!(stacks->b))
		return ;
	tmpa = stacks->a;
	tmpb = stacks->b->next;
	stacks->a = stacks->b;
	stacks->a->next = tmpa;
	stacks->b = tmpb;
}

void	pb(t_2_stacks *stacks)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	if (!(stacks->a))
		return ;
	tmpa = stacks->a->next;
	tmpb = stacks->b;
	stacks->b = stacks->a;
	stacks->b->next = tmpb;
	stacks->a = tmpa;
}
