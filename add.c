#include "monty.h"
void add(stack_t **stack, unsigned int line_number)
{
	unsigned int count = 0;
	*stack = store.head;
	stack_t *ptr = *stack;
	while (ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
	int x =(*stack)->n;
	*stack=(*stack)->next;
	(*stack)->n=(*stack)->n + x;
	return(pop(stack, line_number));


}
