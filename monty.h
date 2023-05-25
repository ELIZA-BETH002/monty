#ifndef MONTY_H

#define MONTY_H

/* Data Structures */

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

/* Function Prototypes */

/* main.c */

int main(int argc, char *argv[]);

/* Task 0 */

void push_stack(stack_t **stack, unsigned int line_number);

void pall_stack(stack_t **stack, unsigned int line_number);

/* Task 1 */

void pint_stack(stack_t **stack, unsigned int line_number);

/* Task 2 */

void pop_stack(stack_t **stack, unsigned int line_number);

/* Task 3 */

void swap_stack(stack_t **stack, unsigned int line_number);

/* Task 4 */

void add_stack(stack_t **stack, unsigned int line_number);

/* Task 5 */

void nop_stack(stack_t **stack, unsigned int line_number);

/* Task 6 (Advanced) */

void sub_stack(stack_t **stack, unsigned int line_number);

/* Task 7 (Advanced) */

void div_stack(stack_t **stack, unsigned int line_number);

/* Task 8 (Advanced) */

void mul_stack(stack_t **stack, unsigned int line_number);

/* Task 9 (Advanced) */

void mod_stack(stack_t **stack, unsigned int line_number);

/* Task 10 (Advanced) */

void comments(stack_t **stack, char *line);

/* Task 11 (Advanced) */

void pstr(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
