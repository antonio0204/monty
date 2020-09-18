#ifndef __MONTY_HOLBERTON__
#define __MONTY_HOLBERTON__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/*---  STRUCTURES  ---*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*--- OPCODE FUNCTIONS  ---*/


/* _main.c */
int main(int ac, char **av);

/* _free.c */
void free_stack(stack_t **stack);

/* _run.c */
int _run(FILE *fd);
char **tokening(char *line, char *delim);
int empty_line(char *line, char *delims);

/* _exec.c */
int execute(char **token, stack_t **stack, unsigned int line_num);
int _push(stack_t **stack, char **token, unsigned int line_num);
int _pushq(stack_t **stack, char **token, unsigned int line_num);
void _pall(stack_t **stack, unsigned int line_num);

/* _opcode1.c */
void _pint(stack_t **stack, unsigned int line_num);
void _pop(stack_t **stack, unsigned int line_num);
void _swap(stack_t **stack, unsigned int line_num);
void _sub(stack_t **stack, unsigned int line_num);
void _add(stack_t **stack, unsigned int line_num);



/*--- errors ---*/

/* _errors.c */
int usage_error(int flag);
int open_error(char *filename);
int f_errors(int flag, unsigned int line_num);

#endif /* __MONTY_HOLBERTON__ */
