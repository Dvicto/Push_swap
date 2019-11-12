#include "push_swap.h"

int		check_sort(t_2_stacks *stacks)
{
	int		tmp;

	if (stacks->b)
		return (0);
	tmp = stacks->start_a->value;
	stacks->a = stacks->start_a->next;
	while (stacks->a)
	{
		if (stacks->a->value <= tmp)
			return (0);
		stacks->a = stacks->a->next;
	}
	return (1);
}