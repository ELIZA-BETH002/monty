#include <stdio.h>

#include <stdlib.h>

#include "monty.h"

/* Function prototypes */

void process_file(const char *filename);

/* Main function */

int main(int argc, char *argv[])

{

    if (argc != 2)

    {

        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);

        return EXIT_FAILURE;

    }

    const char *filename = argv[1];

    process_file(filename);

    return EXIT_SUCCESS;

}

/* Function to process the Monty file */

void process_file(const char *filename)

{

    FILE *file = fopen(filename, "r");

    if (file == NULL)

    {

        fprintf(stderr, "Error: Cannot open file %s\n", filename);

        exit(EXIT_FAILURE);

    }

    stack_t *stack = NULL;

    char *line = NULL;

    size_t line_length = 0;

    ssize_t read;

    unsigned int line_number = 0;

    while ((read = getline(&line, &line_length, file)) != -1)

    {

        line_number++;

        /* Parse the opcode and argument from the line */

        char *opcode = /* Extract the opcode */;

        char *argument = /* Extract the argument if present */;

        /* Execute the appropriate operation based on the opcode */

        if (strcmp(opcode, "push") == 0)

        {

            /* Convert the argument to an integer value if needed */

            int value = /* Convert the argument to an integer if present */;

            push(&stack, value);

        }

        else if (strcmp(opcode, "pop") == 0)

        {

            pop(&stack);

        }

        else if (strcmp(opcode, "pall") == 0)

        {

            pall(stack);

        }

        else if (strcmp(opcode, /* other opcodes */) == 0)

        {

            /* Handle other opcodes */

        }

        /* Add more conditionals for other opcodes */

        /* Free allocated memory for the line if needed */

    }

    /* Free allocated memory and close the file */

    free(line);

    fclose(file);

}
