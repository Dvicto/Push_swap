#include "push_swap.h"

void		rra(t_2_stacks *stacks)
{
	t_stack		*stack;

	stack = stacks->start_a;
	stacks->a = stacks->start_a;
	if (!(stacks->a) || !(stacks->a->next))
		return ;
	while (stacks->a->next->next != NULL)
		stacks->a = stacks->a->next;
	stacks->start_a = stacks->a->next;
	stacks->start_a->next = stack;
	stacks->a->next = NULL;
}

void		rrb(t_2_stacks *stacks)
{
	t_stack		*stack;

	stack = stacks->start_b;
	stacks->b = stacks->start_b;
	if (!(stacks->b) || !(stacks->b->next))
		return ;
	while (stacks->b->next->next != NULL)
		stacks->b = stacks->b->next;
	stacks->start_b = stacks->b->next;
	stacks->start_b->next = stack;
	stacks->b->next = NULL;
}

void		rrr(t_2_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}