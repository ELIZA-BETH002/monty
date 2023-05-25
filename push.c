#include "monty.h"

/**

 * push - Add a new element to the top of the stack

 * @stack: Double pointer to the head of the stack

 * @line_number: Line number of the opcode being executed

 */

void push(stack_t **stack, unsigned int line_number)

{

    stack_t *new_node;

    int value;

    /* Ensure the stack and line_number are valid */

    if (stack == NULL)

        return;

    /* Extract the integer value from the opcode argument */

    value = /* Extract the integer value from the opcode argument */;

    /* Create a new node */

    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)

    {

        /* Handle malloc failure */

        fprintf(stderr, "Error: malloc failed\n");

        /* Exit or return depending on your error handling strategy */

        exit(EXIT_FAILURE);

    }

    /* Assign values to the new node */

    new_node->n = value;

    new_node->prev = NULL;

    new_node->next = *stack;

    /* Update previous node if the stack is not empty */

    if (*stack != NULL)

        (*stack)->prev = new_node;

    /* Update the head of the stack */

    *stack = new_node;

}

