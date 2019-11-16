/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:00:08 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 17:22:25 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	free_stacks(t_2_stacks *stacks)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = stacks->a;
	tmpb = stacks->b;
	while (tmpa)
	{
		stacks->a = stacks->a->next;
		free(tmpa);
		tmpa = stacks->a;
	}
	while (tmpb)
	{
		stacks->b = stacks->b->next;
		free(tmpb);
		tmpb = stacks->b;
	}
	free(stacks);
}

void	error_checker_stder(t_2_stacks *stacks, char *str)
{
	if (stacks->a)
		free(stacks->a);
	if (stacks->b)
		free(stacks->b);
	free (stacks);
	free(str);
	write(2, "Error\n", 6);
	exit(0);
}

void	free_all(t_2_stacks *stacks, char ***numbers)
{
	int 	i;

	i = 0;
	while ((*numbers)[i])
	{
		free((*numbers)[i]);
		i++;
	}
	if (*numbers)
		free(*numbers);
	if (stacks)
		free_stacks(stacks);
}

void	checker_stdin(t_2_stacks *stacks, char *str)
{
	if (!ft_strcmp(str, "sa"))
		sa(stacks);
	else if (!ft_strcmp(str, "sb"))
		sb(stacks);
	else if (!ft_strcmp(str, "ss"))
		ss(stacks);
	else if (!ft_strcmp(str, "pa"))
		pa(stacks);
	else if (!ft_strcmp(str, "pb"))
		pb(stacks);
	else if (!ft_strcmp(str, "ra"))
		ra(stacks);
	else if (!ft_strcmp(str, "rb"))
		rb(stacks);
	else if (!ft_strcmp(str, "rr"))
		rr(stacks);
	else if (!ft_strcmp(str, "rra"))
		rra(stacks);
	else if (!ft_strcmp(str, "rrb"))
		rrb(stacks);
	else if (!ft_strcmp(str, "rrr"))
		rrr(stacks);
	else
		error_checker_stder(stacks, str);
}

int		write_error()
{
	write(2, "Error\n", 6);
	exit(0);
	return (0);
}
