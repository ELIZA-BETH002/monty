#include "monty.h"

int pop_stack(stack_t **stack)

{

    if (*stack == NULL)

    {

        fprintf(stderr, "Error: Can't pop an empty stack\n");

        return EXIT_FAILURE;

    }

    stack_t *temp = *stack;

    *stack = (*stack)->next;

    if (*stack != NULL)

        (*stack)->prev = NULL;

    free(temp);

    return EXIT_SUCCESS;

}
