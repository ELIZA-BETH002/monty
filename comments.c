#include "monty.h"

void comments(stack_t **stack, char *line) {

    (void)stack;  // Unused parameter, silence the warning

    char *comment = strchr(line, '#');

    if (comment != NULL) {

        *comment = '\0';  // Remove the comment portion from the line

    }

}
