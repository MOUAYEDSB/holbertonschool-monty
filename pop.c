#include "monty.h"

/**
 * _pop - Remove the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode in the Monty file.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	/* If the stack is empty */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Store the top element in a temporary variable */
	tmp = *stack;
	/* Update the top by replacing it with the next element */
	*stack = (*stack)->next;
	/* Free the allocated memory for the old top element */
	free(tmp);
}
