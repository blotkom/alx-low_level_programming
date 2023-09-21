#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints
 * @h: pointer t  head
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
