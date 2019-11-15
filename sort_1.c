#include "push_swap.h"

t_border		*search_border(t_2_stacks *stacks)
{
	t_border	*border;
	t_stack		*tmp;

	tmp = stacks->a;
	border = (t_border *)malloc(sizeof(border));
	border->min = tmp->value;
	border->max = tmp->value;
	while (tmp)
	{
		if (tmp->value < border->min)
			border->min = tmp->value;
		if (tmp->value > border->max)
			border->max = tmp->value;
		tmp = tmp->next;
	}
	border->med = search_med(stacks);
	return (border);
}