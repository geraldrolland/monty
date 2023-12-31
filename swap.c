#include "monty.h"
/**
 *swap - swap the top element with the proceeding element
 *@stack: pointer to the head pointer
 *@line_number: line number
 *Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	unsigned int count = 0;
	stack_t *ptr = *stack;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free(store.content);
		free_stack(stack);
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	else
	{
	temp = (*stack)->n;
	ptr = *stack;
	*stack = (*stack)->next;
	ptr->n = (*stack)->n;
	(*stack)->n = temp;
	*stack = ptr;
	}
}
