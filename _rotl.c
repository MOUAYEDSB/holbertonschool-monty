#include "monty.h"

/**
 * _rotl - rotates the stack to the top
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *last;

    (void)line_number;

    if (*stack == NULL || (*stack)->next == NULL)
        return;

    first = *stack;
    last = *stack;

    while (last->next != NULL)
        last = last->next;

    *stack = first->next;
    (*stack)->prev = NULL;
    last->next = first;
    first->prev = last;
    first->next = NULL;
}
