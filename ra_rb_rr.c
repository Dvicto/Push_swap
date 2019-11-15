#include "push_swap.h"

void		ra(t_2_stacks *stacks)
{
	t_stack	*tmpa;
	t_stack *tmpa2;

	if (!(stacks->a) || !(stacks->a->next))
		return ;
	tmpa = stacks->a;
	tmpa2 = stacks->a;
	while (tmpa2->next != NULL)
		tmpa2 = tmpa2->next;
	tmpa2->next = tmpa;
	stacks->a = tmpa->next;
	tmpa2 = tmpa2->next;
	tmpa2->next = NULL;
}

void		rb(t_2_stacks *stacks)
{
	t_stack	*tmpb;
	t_stack *tmpb2;

	if (!(stacks->b) || !(stacks->b->next))
		return ;
	tmpb = stacks->b;
	tmpb2 = stacks->b;
	while (tmpb2->next != NULL)
		tmpb2 = tmpb2->next;
	tmpb2->next = tmpb;
	stacks->b = tmpb->next;
	tmpb2 = tmpb2->next;
	tmpb2->next = NULL;
}

void		rr(t_2_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}