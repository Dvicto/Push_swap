/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:07:29 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:16:03 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"
void	free_all_and_exit(t_2_stacks *stacks, t_border *border)
{
	free_stacks(stacks);
	free(border);
	exit(0);
}

void	fix_ost_a(t_2_stacks *stacks, t_border *border)
{
	if (stacks->a->value == border->min && stacks->a->next->value == border->max)
	{
		p_rra(stacks);
		p_sa(stacks);
	}
	if (stacks->a->value == border->max && stacks->a->next->value == border->min)
	{
		p_ra(stacks);
	}
	if (stacks->a->value == border->max && stacks->a->next->value == border->med)
	{
		p_ra(stacks);
		p_ra(stacks);
	}
	if (stacks->a->value == border->med && stacks->a->next->value == border->max)
	{
		p_rra(stacks);
	}
	if (stacks->a->value == border->med && stacks->a->next->value == border->min)
	{
		p_sa(stacks);
	}
	if (!(stacks->b))
		free_all_and_exit(stacks, border);
}
/*
void	all_to_b(t_border *border, t_2_stacks *stacks)
{
	int			count;
	t_stack	*tmp;

	count = 0;
	tmp = stacks->a;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	if (count == 3)
		return (fix_ost_a(stacks, border));
	while (count > 0)
	{
		if (stacks->a->value != border->min && stacks->a->value != border->max
			&& stacks->a->value != border->med)
		{
			p_pb(stacks);
		}
		else
			p_ra(stacks);
		count--;
	}
	fix_ost_a(stacks, border);
}*/

void	all_to_b(t_2_stacks *stacks)
{
	int			count;
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
	int	kol_vo;
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
