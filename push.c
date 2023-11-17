#include "monty.h"
void addNode(stack_t **stack);
/**
 *push - push elemnt in to the stack
 *@stack: pointer to the head pointer
 *@line_number: line number
 *Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int data = atoi(store.data);

	if ((data == 0 && strcmp(store.data, "0") != 0) || store.data == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack();
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	*stack = store.head;
	if (*stack == NULL)
	{
		*stack = malloc(sizeof(stack_t));
		if (*stack == NULL)
		{
			fprintf(stderr, "Error: malloc failed");
			free_stack();
			free(store.data);
			fclose(store.myfile);
			exit(EXIT_FAILURE);
		}
		(*stack)->n = data;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		store.head = *stack;
	}
	else
	{
	(addNode(stack));
	}
}
/**
 *addNode - add node at the top of the stack
 *@stack: pointer to the head pointer
 *Return: void
 */
void addNode(stack_t **stack)
{
	int data = atoi(store.data);
	stack_t *newNode = NULL;

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		free_stack();
		fclose(store.myfile);
		exit(EXIT_FAILURE);
	}
	newNode->n = data;
	newNode->next = *stack;
	(*stack)->prev = newNode;
	newNode->prev = NULL;
	*stack = newNode;
	store.head = *stack;
}
