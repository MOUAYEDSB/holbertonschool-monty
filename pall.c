#include "monty.h"

/**
 * _pall - prints all the values on the stack
 * starting from the top of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number being interpreted from script file
 * Return: nothing
 */
void _pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *tmp = *stack; /*Create a ptr tmp to walk the stack*/

	/* Walk the stack until the ptr tmp is NULL */
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
