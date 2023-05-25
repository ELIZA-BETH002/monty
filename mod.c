#include "monty.h"

int mod_stack(stack_t **stack, unsigned int line_number)

{

    if (*stack == NULL || (*stack)->next == NULL)

    {

        fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);

        return EXIT_FAILURE;

    }

    if ((*stack)->n == 0)

    {

        fprintf(stderr, "L%u: division by zero\n", line_number);

        return EXIT_FAILURE;

    }

    int mod_result = (*stack)->next->n % (*stack)->n;

    pop_stack(stack, line_number);  // Remove top element

    (*stack)->n = mod_result;       // Update value of new top element

    return EXIT_SUCCESS;

}

