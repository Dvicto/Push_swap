#include "push_swap.h"

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
	if (!((*stacks)->a))
	{
		(*stacks)->a = new_stack();
		(*stacks)->a->value = num;
		(*stacks)->start_a = (*stacks)->a;
		return ;
	}
	while ((*stacks)->a->next != NULL)
		(*stacks)->a = (*stacks)->a->next;
	(*stacks)->a->next = new_stack();
	(*stacks)->a = (*stacks)->a->next;
	(*stacks)->a->value = num;
}

int		check_and_create(t_2_stacks **stacks, char *str)
{
	char	**numbers;
	int		num;

	*stacks = (t_2_stacks *)malloc(sizeof(t_2_stacks));
	numbers = ft_strsplit(str, ' ');
	while (*numbers)
	{
		if (new_atoi(*numbers) == LONG_MAX)
		{
			free(numbers);
			if ((*stacks)->a)
			{
				free((*stacks)->a);
				free((*stacks));
			}
			return (0);
		}
		else
		{
			num = (int)new_atoi(*numbers);
			add_a(stacks, num);
		}
		numbers++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_2_stacks	*stacks;
	char *test="123 432 678";

	if (argc < 2)
		return (0);
	if (!(check_and_create(&stacks, test)))
		return (0);
	stacks->a = stacks->start_a;
	while (stacks->a)
	{
		printf("%d", stacks->a->value);
		stacks->a = stacks->a->next;
	}
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