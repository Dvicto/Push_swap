#include "push_swap.h"

t_border		*search_border(t_2_stacks *stacks)
{
	t_border	*border;

	border = (t_border *)malloc(sizeof(border));
	border->min = stacks->a->value;
	border->max = stacks->a->value;
	stacks->a = stacks->start_a;
	while (stacks->a)
	{
		if (stacks->a->value < border->min)
			border->min = stacks->a->value;
		if (stacks->a->value > border->max)
			border->max = stacks->a->value;
		stacks->a = stacks->a->next;
	}
	border->med = search_med(stacks);
	return (border);
}