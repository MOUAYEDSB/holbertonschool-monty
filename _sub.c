#include "monty.h"

/**
 * _sub - Subtract the top element of the stack from the second top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode being executed.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
    int a, b, result;

    /* Check if the stack contains at least 2 elements */
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Get the values of the first two elements */
    a = (*stack)->n;        /* Store the value of the first element in 'a' */
    b = (*stack)->next->n;  /* Store the value of the second element in 'b' */
    result = b - a;         /* Subtract 'a' from 'b' */
    
    /* Remove the top element from the stack */
    _pop(stack, line_number);

    (*stack)->n = result;   /* Store the difference in the second element of the stack */
}
