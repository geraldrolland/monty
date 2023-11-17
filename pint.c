#include "monty.h"
/**
 *pint - diplay the top element in the stack
 *@stack: pointer to the head pointer
 *@line_number: line number
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	*stack = store.head;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	if (store.data != NULL)
		fprintf(stdout, "\n");
	else
	fprintf(stdout, "%d\n", (*stack)->n);

}
