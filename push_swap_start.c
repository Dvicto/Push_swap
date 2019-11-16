/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:35:52 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/16 17:23:36 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long long int		new_atoi(char *str)
{
	int				i;
	int				fl;
	long long int	num;

	fl = 0;
	i = 0;
	num = 0;
	if (str[i] == '-')
	{
		fl = 1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (LONG_MAX);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (num > INT_MAX || num < INT_MIN)
		return (LONG_MAX);
	if (fl)
		return (num * -1);
	return (num);
}

static int		check_and_create(t_2_stacks *stacks, char *str)
{
	char	**numbers;
	int		num;
	int		i;

	i = 0;
	numbers = ft_strsplit(str, ' ');
	while (numbers[i])
	{
		if (new_atoi(numbers[i]) == LONG_MAX)
		{
			free_all(stacks, &numbers);
			return (0);
		}
		else
		{
			num = (int)new_atoi(numbers[i]);
			add_a(stacks, num);
		}
		i++;
	}
	i = -1;
	while (numbers[++i])
		free(numbers[i]);
	if (numbers)
		free(numbers);
	return (1);
}

static int		ne_xvataet_mesta(t_2_stacks *stacks, char *str, int i)
{
	if (!(check_and_create(stacks, str)))
		{
			return (write_error());
		}
	i++;
	return (i);
}

int		main(int argc, char **argv)
{
	t_2_stacks	*stacks;
	int			i;

	i = 1;
	if (argc < 2)
		return (0);
	stacks = (t_2_stacks *)malloc(sizeof(t_2_stacks));
	stacks->b = NULL;
	stacks->a = NULL;
	while (i < argc)
	{
		ne_xvataet_mesta(stacks, argv[i], i);
		i++;
	}
	if (!check_count(stacks))
		return(write_error());
	push_swap(stacks);
	return (0);
}