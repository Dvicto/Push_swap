#include "push_swap.h"

void		rra(t_2_stacks *stacks)
{
	t_stack		*tmpa;
	t_stack		*tmpa2;

	if (!(stacks->a) || !(stacks->a->next))
		return ;
	tmpa = stacks->a;
	tmpa2 = stacks->a;
	while (tmpa2->next->next != NULL)
		tmpa2 = tmpa2->next;
	stacks->a = tmpa2->next;
	stacks->a->next = tmpa;
	tmpa2->next = NULL;
}

void		rrb(t_2_stacks *stacks)
{
	t_stack		*tmpb;
	t_stack		*tmpb2;

	if (!(stacks->b) || !(stacks->b->next))
		return ;
	tmpb = stacks->b;
	tmpb2 = stacks->b;
	while (tmpb2->next->next != NULL)
		tmpb2 = tmpb2->next;
	stacks->b = tmpb2->next;
	stacks->b->next = tmpb;
	tmpb2->next = NULL;
}

void		rrr(t_2_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}