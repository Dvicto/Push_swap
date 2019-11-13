#include "push_swap.h"
#include <stdio.h>

int		main()
{
	t_2_stacks	*stacks;
	stacks->a = new_stack();
	stacks->a->value = 1;
	stacks->start_a = stacks->a;
	stacks->a->next = new_stack();
	stacks->a = stacks->a->next;
	stacks->a->value = 2;
	stacks->a->next = new_stack();
	stacks->a = stacks->a->next;
	stacks->a->value = 3;
	stacks->a->next = new_stack();
	stacks->a = stacks->a->next;
	stacks->a->value = 4;
	stacks->a->next = new_stack();
	stacks->a = stacks->a->next;
	stacks->a->value = 5;
	stacks->a = stacks->start_a;
	stacks->b = new_stack();
	stacks->start_b = stacks->b;
	/*while (stacks->a)
	{
		printf("%d", stacks->a->value);
		stacks->a = stacks->a->next;
	}
	printf("\n");
	while (stacks->b)
	{
		printf("%d", stacks->b->value);
		stacks->b = stacks->b->next;
	}
	pa(stacks);
	pa(stacks);
	pa(stacks);
	pa(stacks);
	pa(stacks);
	pa(stacks);
	ss(stacks);
	ss(stacks);
	//pb(stacks);
	printf("\n");
	stacks->a = stacks->start_a;
	stacks->b = stacks->start_b;
	while (stacks->a)
	{
		printf("%d", stacks->a->value);
		stacks->a = stacks->a->next;
	}
	printf("\n");
	while (stacks->b)
	{
		printf("%d", stacks->b->value);
		stacks->b = stacks->b->next;
	}
	if (stacks->a)
		printf("%d", 7);
	else
		printf("%d", 9);*/
	t_border *border;
	border = search_border(stacks);
	printf("%d, %d, %d", border->min, border->max, border->med);
	return (0);
}