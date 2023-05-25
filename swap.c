#include "monty.h"

int swap_stack(stack_t **stack)

{

    if (*stack == NULL || (*stack)->next == NULL)

    {

        fprintf(stderr, "Error: Can't swap, stack too short\n");

        return EXIT_FAILURE;

    }

    int temp = (*stack)->n;

    (*stack)->n = (*stack)->next->n;

    (*stack)->next->n = temp;

    return EXIT_SUCCESS;

}
