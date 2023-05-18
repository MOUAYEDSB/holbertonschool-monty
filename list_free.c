#include "monty.h"

/**
 * _freeList - Frees a list_t list.
 * @head: A pointer to the list_t list.
 *
 */

void _freeList(stack_t **head)
{
	/* Check if head is NULL */
	if (!head)
		return;
	/* Iterate through the linked list and free each node */
	while (*head && (*head)->next)
	{
		*head = (*head)->next;
		free((*head)->prev);
	}
	/* Free the memory occupied by the head of the list */
	free(*head);
}
