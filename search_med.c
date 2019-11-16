#include	"push_swap.h"

static int	sort_array(int *array, int i, int j, int n)
{
	int tmp;

	while (array[i])
		i++;
	while (n < i)
	{
		j = 0;
		while (j < i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		n++;
	}
	i /= 2;
	j = array[i];
	//free(array);
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
	return (sort_array(array, 0, 0, 0));
}
