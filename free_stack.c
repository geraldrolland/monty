#include "monty.h"
/**
 *free_stack - free the node in the stack
 *Return: void
 */
void free_stack(void)
{
	stack_t *ptr = store.head, *temp;
/*
	*if (ptr == NULL)
		*return;
	*/
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		free(temp);
	}
	/*return;*/
}
