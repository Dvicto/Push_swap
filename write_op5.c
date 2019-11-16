/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:44:02 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 18:47:13 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_rra(stacks);
		n++;
	}
}

void	rrb_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_rrb(stacks);
		n++;
	}
}

void	rrr_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_rrr(stacks);
		n++;
	}
}