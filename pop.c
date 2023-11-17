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

	*stack = store.head;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	else
	{
	temp = *stack;
	*stack = (*stack)->next;
	if (*stack == NULL)
	{
		store.head = NULL;
		free(temp);
	}
	else
	{
	(*stack)->prev = NULL;
	store.head = *stack;
	free(temp);
	}
	}
}
