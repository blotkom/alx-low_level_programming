#include "lists.h"

/**
 * get_nodeint_at_index - A function thatspecific index
 * @head: A pointer to liste
 * @index: The index o node
 * Return: A pointer to node at sNULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
