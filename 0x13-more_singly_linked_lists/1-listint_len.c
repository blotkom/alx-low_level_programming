#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A functiots in the list
 * @h: A pointer t_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
