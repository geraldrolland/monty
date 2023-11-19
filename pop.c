#include "monty.h"
/**
 *pop - remove the top element on the stack
 *@stack: pointeto the head pointer
 *@line_number: line number
 *Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(store.content);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	else
	{
	temp = *stack;
	*stack = (*stack)->next;
	if (*stack == NULL)
		free(temp);
	else
	{
	(*stack)->prev = NULL;
	free(temp);
	}
	}
}
