#include "monty.h"
/**
 *pall - diplay all element in the stack
 *@stack: pointer
 *@line_number: line number
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	*stack = store.head;
	if (*stack == NULL || store.data != NULL)
	{
		printf("\n");
	}
	else
	{
	while (*stack != NULL)
	{
		fprintf(stdout, "%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	}
}
