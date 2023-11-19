#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 *struct glob - datatype for the global variable store
 *@myfile: stores pointer of a file stream of type FILE
 *@data: stores the data
 *@head: pointer to the head node of the list
 *@content: line content
 */
typedef struct glob
{
	FILE *myfile;
	char *data;
	char *content;
}glob;
glob store;
int execute_cmd(char *buffer, stack_t **stack, unsigned int line_number, FILE *file);
void pall(stack_t **stack, unsigned int line_number);
int free_stack(stack_t **stack);
void push(stack_t **stack, unsigned int line_number);
char *_strdup(char *str);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
unsigned int count_element();
void add(stack_t **stack, unsigned int line_number);
#endif
