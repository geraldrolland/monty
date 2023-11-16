#include "monty.h"
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	unsigned int count=0;
	stack_t *ptr=store.head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack();
		exit(EXIT_FAILURE);
	}
	*stack = store.head;
	temp = (*stack)->n;
	ptr = *stack;
	*stack = (*stack)->next;
	ptr->n=(*stack)->n;
	(*stack)->n=temp;
	return;

}
unsigned int count_element()
{
	unsigned int count = 0;
	stack_t *stack = store.head;
	if (stack == NULL)
		return count;
	while(stack!=NULL)
	{
		count++;
		stack = stack->next;

	}
	return count;
}
