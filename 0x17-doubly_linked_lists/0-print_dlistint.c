#include "lists.h"

/**
 * print_dlistint - print all the element of a dlistint list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
