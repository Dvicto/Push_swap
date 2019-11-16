/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:21:23 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 16:24:00 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_sa(t_2_stacks *stacks)
{
	sa(stacks);
	ft_putstr("sa\n");
}

void	p_sb(t_2_stacks *stacks)
{
	sb(stacks);
	ft_putstr("sb\n");
}
void	p_ss(t_2_stacks *stacks)
{
	ss(stacks);
	ft_putstr("ss\n");
}
