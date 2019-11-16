/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:07:29 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:52:59 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_to_b(t_2_stacks *stacks)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = stacks->a;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	if (count == 3)
		return (sort_3(stacks));
	while (count > 3)
	{
		p_pb(stacks);
		count--;
	}
	sort_3(stacks);
}

void	algos_for_2_elems(t_2_stacks *stacks)
{
	if (check_sort(stacks))
		return ;
	else
	{
		p_sa(stacks);
	}
}

void	choose_algos(t_2_stacks *stacks)
{
	int		kol_vo;
	t_stack *tmp;

	tmp = stacks->a;
	kol_vo = 0;
	while (tmp)
	{
		kol_vo++;
		tmp = tmp->next;
	}
	if (!stacks->a || kol_vo == 1 || check_sort(stacks))
	{
		free_stacks(stacks);
		exit(0);
	}
	else if (kol_vo == 2)
	{
		algos_for_2_elems(stacks);
		free_stacks(stacks);
		exit(0);
	}
	else if (kol_vo > 2)
		return ;
}
