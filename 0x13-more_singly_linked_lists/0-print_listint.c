#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A functionhe list
 * @h: A pointetructure
 * Return: the numf nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
