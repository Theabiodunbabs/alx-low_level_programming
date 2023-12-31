#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
			break;
	}

	*h = NULL;
	return (count);
}
