#include "monty.h"

/**
 * _swap - Switch the positions of the first two elements in the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the opcode being executed.
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	/* Check if the stack contains at least 2 elements */
	if (*stack == NULL || (*stack)->next == NULL)

	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Swap the values of the first two elements in the stack */
	/* Store the value of the first element in the stack */
	/* Swap the value of the first element with the second element */
	/* Place the stored value in the second element */

	int tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
