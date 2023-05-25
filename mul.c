#include "monty.h"

int mul_stack(stack_t **stack, unsigned int line_number)

{

    if (*stack == NULL || (*stack)->next == NULL)

    {

        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);

        return EXIT_FAILURE;

    }

    int mul_result = (*stack)->next->n * (*stack)->n;

    pop_stack(stack, line_number);  // Remove top element

    (*stack)->n = mul_result;       // Update value of new top element

    return EXIT_SUCCESS;

}

