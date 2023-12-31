#include "monty.h"
/**
 *pall - diplay all element in the stack
 *@stack: pointer
 *@line_number: line number
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	(void)line_number;

	while (ptr != NULL)
	{
		fprintf(stdout, "%d\n", (ptr)->n);
		ptr = (ptr)->next;
	}
}
