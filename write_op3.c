/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:21:23 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 21:43:23 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_rra(t_2_stacks *stacks)
{
	rra(stacks);
	ft_putstr("rra\n");
}

void	p_rrb(t_2_stacks *stacks)
{
	rrb(stacks);
	ft_putstr("rrb\n");
}

void	p_rrr(t_2_stacks *stacks)
{
	rrr(stacks);
	ft_putstr("rrr\n");
}
