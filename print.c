#include "monty.h"

void print_stack(stack_t *stack)

{

    while (stack != NULL)

    {

        printf("%d\n", stack->n);

        stack = stack->next;

    }

}

