#include "monty.h"

/**
<<<<<<< HEAD
* f_pall - function that prints everything in the stack
* @head: double head pointer to the stack
* @counter: unused line count
*
* Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
=======

* f_pall - function that prints everything in the stack

* @head: double head pointer to the stack

* @counter: unused line count

*

* Return: nothing

*/

void f_pall(stack_t **head, unsigned int counter)

>>>>>>> fd1eea30ce35171e8662fd3b169dac5a14b7dcfe
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
