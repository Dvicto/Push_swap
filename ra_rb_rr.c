#include "push_swap.h"

void		ra(t_2_stacks *stacks)
{
	stacks->a = stacks->start_a;
	if (!(stacks->a) || !(stacks->a->next))
		return ;
	while (stacks->a->next != NULL)
		stacks->a = stacks->a->next;
	stacks->a->next = stacks->start_a;
	stacks->start_a = stacks->start_a->next;
	stacks->a->next->next = NULL;
}

void		rb(t_2_stacks *stacks)
{
	stacks->b = stacks->start_b;
	if (!(stacks->b) || !(stacks->b->next))
		return ;
	while (stacks->b->next != NULL)
		stacks->b = stacks->b->next;
	stacks->b->next = stacks->start_b;
	stacks->start_b = stacks->start_b->next;
	stacks->b->next->next = NULL;
}

void		rr(t_2_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}