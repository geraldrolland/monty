#include "monty.h"
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	*stack=store.head;
	if (*stack==NULL || store.data != NULL)
	{
		return;
	}
	while (*stack!=NULL)
	{
		fprintf(stdout, "%d\n", (*stack)->n);
		*stack=(*stack)->next;
	}
	return;
}
