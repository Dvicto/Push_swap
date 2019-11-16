/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:44:02 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 18:46:37 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_ra(stacks);
		n++;
	}
}

void	rb_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_rb(stacks);
		n++;
	}
}

void	rr_n_times(t_2_stacks *stacks, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		p_rr(stacks);
		n++;
	}
}