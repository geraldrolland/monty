#include "monty.h"
void free_stack()
{
	stack_t *ptr = store.head, *temp;
	if (ptr == NULL)
		return;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		free(temp);
	}
	return;
}
