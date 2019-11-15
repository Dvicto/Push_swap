#include "push_swap.h"

void	pa(t_2_stacks *stacks)
{
	stacks->a = stacks->start_a;
	stacks->b = stacks->start_b;
	if (!(stacks->a))
		return;
	stacks->start_b = new_stack();
	stacks->start_b->next = stacks->b;
	stacks->start_b->value = stacks->a->value;
	stacks->start_a = stacks->start_a->next;
	stacks->b = stacks->start_b;
	stacks->a = NULL;
}

void	pb(t_2_stacks *stacks)
{
	stacks->a = stacks->start_a;
	stacks->b = stacks->start_b;
	if (!(stacks->b))
		return;
	stacks->start_a = new_stack();
	stacks->start_a->next = stacks->a;
	stacks->start_a->value = stacks->b->value;
	stacks->start_b = stacks->start_b->next;
	stacks->a = stacks->start_a;
	stacks->b = NULL;
}