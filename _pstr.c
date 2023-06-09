#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

    (void)line_number;

    while (tmp != NULL && tmp->n != 0 && (tmp->n >= 0 && tmp->n <= 127))
    {
        printf("%c", tmp->n);
        tmp = tmp->next;
    }

    printf("\n");
}
