#include	"push_swap.h"

static int	sort_array(int **array)
{
	int	i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	while ((*array)[i])
		i++;
	while (j < i - 2)
	{
		if ((*array)[j] > (*array)[j + 1])
		{
			tmp = (*array)[j];
			(*array)[j] = (*array)[j + 1];
			(*array)[j + 1] = tmp;
		}
		j++;
	}
	i /= 2;
	j = (*array)[i];
	free(*array);
	return (j);
}

int	search_med(t_2_stacks *stacks)
{
	int	i;
	int	*array;

	i = 0;
	stacks->a = stacks->start_a;
	while (stacks->a)
	{
		stacks->a = stacks->a->next;
		i++;
	}
	array = (int *)malloc(sizeof(int) * i);
	stacks->a = stacks->start_a;
	i = 0;
	while (stacks->a)
	{
		array[i] = stacks->a->value;
		stacks->a = stacks->a->next;
		i++;
	}
	return (sort_array(&array));
}
