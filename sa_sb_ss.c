#include	"push_swap.h"

void	sa(t_2_stacks *stacks)
{
	int		tmp;

	stacks->a = stacks->start_a;
	if (!(stacks->start_a) || !(stacks->a->next))
		return ;
	stacks->a = stacks->a->next;
	tmp = stacks->a->value;
	stacks->a->value = stacks->start_a->value;
	stacks->start_a->value = tmp;	
}

void	sb(t_2_stacks *stacks)
{
	int		tmp;

	stacks->b = stacks->start_b;
	if (!(stacks->start_b) || !(stacks->b->next))
		return ;
	stacks->b = stacks->b->next;
	tmp = stacks->b->value;
	stacks->b->value = stacks->start_b->value;
	stacks->start_b->value = tmp;	
}

void	ss(t_2_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
