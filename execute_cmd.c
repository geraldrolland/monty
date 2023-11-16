#include "monty.h"
int execute_cmd(stack_t **stack, unsigned int line_number, char *buffer)
{
	int i=0;
	instruction_t cmd[]={
		{"push", push}, {"pall", pall},{"pint", pint}, {"pop", pop}, 
		{"swap", swap}, {"add", add}, {NULL, NULL}
	};
	char *token = strtok(buffer, " \n\r\t");
	if (token == NULL)
		return 1;
	while(cmd[i].opcode!=NULL)
	{
		if (strcmp(cmd[i].opcode, token)==0)
		{
			token =strtok(NULL, " \n\r\t");
			if (token!=NULL)
			{
				store.data=_strdup(token);
			}
			else{
				store.data=token;
			}
			token = strtok(NULL, " \r\t\n");
			if (token !=NULL)
				break;
			cmd[i].f(stack, line_number);
			if (store.data !=NULL)
				free(store.data);
			return 0;
		}
		i++;
		continue;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
	free_stack();
	fclose(store.myfile);
	exit(EXIT_FAILURE);

}
