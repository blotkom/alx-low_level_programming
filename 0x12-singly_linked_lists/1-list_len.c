#include "lists.h"

/**
 * list_len - Aget  number of nudes
 * @h: head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
