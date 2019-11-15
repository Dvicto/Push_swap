#include	"push_swap.h"

void	sa(t_2_stacks *stacks)
{
	int		tmp;
	t_stack	*tmpa;

	if (!(stacks->a) || !(stacks->a->next))
		return ;
	tmpa = stacks->a->next;
	tmp = stacks->a->value;
	stacks->a->value = tmpa->value;
	tmpa->value = tmp;	
}

void	sb(t_2_stacks *stacks)
{
	int		tmp;
	t_stack	*tmpb;

	if (!(stacks->b) || !(stacks->b->next))
		return ;
	tmpb = stacks->b->next;
	tmp = stacks->b->value;
	stacks->b->value = tmpb->value;
	tmpb->value = tmp;	
}

void	ss(t_2_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
