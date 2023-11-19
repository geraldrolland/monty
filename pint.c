#include "monty.h"
/**
 *pint - diplay the top element in the stack
 *@stack: pointer to the head pointer
 *@line_number: line number
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
		fprintf(stdout, "%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(store.content);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}

}
