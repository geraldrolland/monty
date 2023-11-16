#include "monty.h"
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	*stack = store.head;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit (EXIT_FAILURE);
	}
	temp = *stack;
	*stack=(*stack)->next;
	if (*stack == NULL)
	{
		store.head = NULL;
		free(temp);
		return;
	}
	(*stack)->prev=NULL;
	store.head = *stack;
	free(temp);
	return;

}
