/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:05:59 by dvictor           #+#    #+#             */
/*   Updated: 2019/11/15 13:39:04 by dvictor          ###   ########.fr       */
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

void	add_a(t_2_stacks **stacks, int num)
{
	static int	qwert = 0;

	if (qwert == 0)
	{
		(*stacks)->a = new_stack();
		(*stacks)->a->value = num;
		(*stacks)->start_a = (*stacks)->a;
		qwert++;
		return ;
	}
	while ((*stacks)->a->next != NULL)
		(*stacks)->a = (*stacks)->a->next;
	(*stacks)->a->next = new_stack();
	(*stacks)->a = (*stacks)->a->next;
	(*stacks)->a->value = num;
}

void	free_all(t_2_stacks **stacks, char ***numbers)
{
	while (**numbers)
	{
		free(**numbers);
		(*numbers)++;
	}
	//free(*numbers);
	(*stacks)->a = (*stacks)->start_a;
	while ((*stacks)->a)
	{
		free((*stacks)->a);
		(*stacks)->a = (*stacks)->a->next;
	}
	free(*stacks);
}

int		check_and_create(t_2_stacks **stacks, char *str)
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
			// free(numbers);
			// if ((*stacks)->a)
			// {
			// 	free((*stacks)->a); FIXME: longlonglongint crash free in cycle
			// 	free((*stacks));
			// }
			return (0);
		}
		else
		{
			num = (int)new_atoi(numbers[i]);
			add_a(stacks, num);
		}
		i++;
	}
	return (1);
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

int		main(int argc, char **argv)
{
	t_2_stacks	*stacks;
	int			i;
	char		*comands;
	i = 1;

	//open("123", O_RDWR);
	if (argc < 2)
		return (0);
	stacks = (t_2_stacks *)malloc(sizeof(t_2_stacks));
	stacks->b = NULL;
	stacks->start_b = NULL;
	while (i < argc)
	{
		if (!(check_and_create(&stacks, argv[i])))
		{
			return (write_error());
		}
		i++;
	}
	/*while (get_next_line(0, &comands))
	{
		checker_stdin(stacks, comands);
		free(comands);
	}*/
	stacks->a = stacks->start_a;
	while (stacks->a)
	{
		printf("%d\n", stacks->a->value);
		stacks->a = stacks->a->next;
	}
	//close(3);
	return (0);
}
/*
int		main()
{
	char	**numbers;
	char	*str = "3 -20 7 e8 120 -23132 a";
	numbers = ft_strsplit(str, ' ');
	while (*numbers)
	{
		if (new_atoi(*numbers) == LONG_MAX)
			printf("%s\n", "error");
		else
			printf("%lld\n", new_atoi(*numbers));
		numbers++;
	}
	return (0);
}*/