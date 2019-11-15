#include "push_swap.h"
#include "stdlib.h"

t_stack		*new_stack(void)
{
	t_stack		*stack;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->next = NULL;
	stack->value = 0;
	return (stack);
}
