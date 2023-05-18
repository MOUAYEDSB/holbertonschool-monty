#include "monty.h"
void _push(stack_t **head, unsigned int line_number, char *token)
{
	int value;
	stack_t *new_node;

	if (head == NULL)
	{
		fprintf(stderr, "L%u: head is NULL\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (token == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	char *ptr = token;
	while (*ptr != '\0')
	{
		if (!isdigit(*ptr) && *ptr != '-' && *ptr != '+')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		ptr++;
	}

	value = atoi(token);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
}
