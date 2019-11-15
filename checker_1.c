/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:05:59 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 19:27:13 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		write_error()
{
	write(2, "Error\n", 6);
	return (0);
}

long long int		new_atoi(char *str)
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

int		check_and_create(t_2_stacks *stacks, char *str)
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
	i = 0;
	while (numbers[i++])
		free(numbers[i]);
	free(numbers);
	return (1);
}

int		ne_xvataet_mesta(t_2_stacks *stacks, char *str, int i)
{
	if (!(check_and_create(stacks, str)))
		{
			free_stacks(stacks);
			return (write_error());
		}
	i++;
	return (i);
}

int		main(int argc, char **argv)
{
	t_2_stacks	*stacks;
	int			i;
	char		*comands;

	i = 1;
	if (argc < 2)
		return (0);
	stacks = (t_2_stacks *)malloc(sizeof(t_2_stacks));
	stacks->b = NULL;
	while (i < argc)
		i = ne_xvataet_mesta(stacks, argv[i], i);
	while (get_next_line(0, &comands))
	{
		checker_stdin(stacks, comands);
		free(comands);
	}
	if (check_sort(stacks))
		write(1,"OK", 2);
	else
		write(1,"KO", 2);
	free_stacks(stacks);
	return (0);
}
