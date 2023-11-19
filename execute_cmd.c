#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute_cmd(char *buffer, stack_t **stack, unsigned int line_number, FILE *file)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", NULL},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(buffer, " \n\t");
	if (op && op[0] == '#')
		return (0);
	store.data = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_number);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		fclose(file);
		free(buffer);
		free_stack(stack);
		exit(EXIT_FAILURE); }
	return (1);
}
