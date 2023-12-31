#include "monty.h"
/**
 *add - add the top elemnet to preceeding element and pop
 *@stack: pointer to the head pointer
 *@line_number: line number
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	unsigned int count = 0;
	int x;
	stack_t *ptr = NULL;

	ptr = *stack;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free(store.content);
		free_stack(stack);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	else
	{
	x = (*stack)->n;
	ptr = *stack;
	*stack = (*stack)->next;
	(*stack)->n = (*stack)->n + x;
	*stack = ptr;
	pop(stack, line_number);
	}
}
