#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: The stack to operate on.
 * @line_number: line number
 * Return: The value at the top of the stack
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	/* Check if the stack is empty */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Print the value at the top of the stack */
	printf("%d\n", (*stack)->n);
}
