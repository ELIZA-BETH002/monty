#include "monty.h"

int add_stack(stack_t **stack)

{

    if (*stack == NULL || (*stack)->next == NULL)

    {

        fprintf(stderr, "Error: Can't add, stack too short\n");

        return EXIT_FAILURE;

    }

    int sum = (*stack)->n + (*stack)->next->n;

    pop_stack(stack); // Remove the top element

    (*stack)->n = sum; // Assign the sum to the new top element

    return EXIT_SUCCESS;

}

