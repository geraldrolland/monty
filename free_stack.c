#include "monty.h"
/**
 *free_stack - free the node in the stack
 *@stack: pointer to the head pointer
 *Return: void
 */
int free_stack(stack_t **stack)
{
	stack_t *ptr = NULL, *temp = NULL;

	if (*stack == NULL)
		return (1);
	ptr = *stack;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		free(temp);
	}
	return (0);
}
