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
	int		i;
	int		*array;
	t_stack	*tmpa;

	i = 0;
	tmpa = stacks->a;
	while (tmpa)
	{
		tmpa = tmpa->next;
		i++;
	}
	array = (int *)malloc(sizeof(int) * i);
	tmpa = stacks->a;
	i = 0;
	while (tmpa)
	{
		array[i] = tmpa->value;
		tmpa = tmpa->next;
		i++;
	}
	return (sort_array(&array));
}
