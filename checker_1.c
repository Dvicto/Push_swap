/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:05:59 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/26 14:40:29 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long long int	new_atoi(char *str, int i)
{
	int				fl;
	long long int	num;

	fl = 1;
	num = 0;
	if (str[i] == '-')
	{
		if (!(str[i + 1]))
			return (LONG_MAX);
		fl = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9' || num > INT_MAX || num * fl < INT_MIN)
			return (LONG_MAX);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (fl == -1)
		num = num * -1;
	if (num > INT_MAX || num < INT_MIN)
		return (LONG_MAX);
	return (num);
}

static int				check_and_create(t_2_stacks *stacks, char *str)
{
	char	**numbers;
	int		num;
	int		i;

	i = 0;
	numbers = ft_strsplit(str, ' ');
	while (numbers[i])
	{
		if (new_atoi(numbers[i], 0) == LONG_MAX)
		{
			free_all(stacks, &numbers);
			return (0);
		}
		else
		{
			num = (int)new_atoi(numbers[i], 0);
			add_a(stacks, num);
		}
		i++;
	}
	i = -1;
	while (numbers[++i])
		free(numbers[i]);
	free(numbers);
	return (1);
}

static int				ne_xvataet_mesta(t_2_stacks *stacks, char *str, int i)
{
	long long	j;

	j = 0;
	while (j < (long long)ft_strlen(str))
	{
		if (str[j] > 32 && str[j] < 127)
			j = LONG_MAX;
		else
			j++;
	}
	if (j != LONG_MAX)
		return (write_error());
	if (!(check_and_create(stacks, str)))
	{
		return (write_error());
	}
	i++;
	if (!(check_count(stacks)))
	{
		write_error();
		exit(0);
	}
	return (i);
}

int						main(int argc, char **argv)
{
	t_2_stacks	*stacks;
	int			i;
	char		*comands;

	i = 0;
	if (argc < 2)
		return (0);
	if (!(stacks = (t_2_stacks *)malloc(sizeof(t_2_stacks))))
		exit(0);
	stacks->b = NULL;
	stacks->a = NULL;
	while (++i < argc)
		ne_xvataet_mesta(stacks, argv[i], i);
	while (get_next_line(0, &comands))
	{
		checker_stdin(stacks, comands);
		free(comands);
	}
	free(comands);
	if (check_sort(stacks))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stacks(stacks);
	return (0);
}
