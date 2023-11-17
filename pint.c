#include "monty.h"
void pint(stack_t **stack, unsigned int line_number)
{
	*stack = store.head;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (store.data !=NULL)
		return;
	else
	fprintf(stdout, "%d\n", (*stack)->n);
	//return;

}
