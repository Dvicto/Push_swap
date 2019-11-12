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
	while (stacks->a)
	{
		printf("%d", stacks->a->value);
		stacks->a = stacks->a->next;
	}
	rra(stacks);
	printf("\n");
	stacks->a = stacks->start_a;
	while (stacks->a)
	{
		printf("%d", stacks->a->value);
		stacks->a = stacks->a->next;
	}
	return (0);
}