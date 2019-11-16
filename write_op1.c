/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:21:23 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 16:21:29 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_pb(t_2_stacks *stacks)
{
	pb(stacks);
	ft_putstr("pb\n");
}

void	p_pa(t_2_stacks *stacks)
{
	pa(stacks);
	ft_putstr("pa\n");
}
void	p_ra(t_2_stacks *stacks)
{
	ra(stacks);
	ft_putstr("ra\n");
}

void	p_rb(t_2_stacks *stacks)
{
	rb(stacks);
	ft_putstr("rb\n");
}

void	p_rr(t_2_stacks *stacks)
{
	rr(stacks);
	ft_putstr("rr\n");
}