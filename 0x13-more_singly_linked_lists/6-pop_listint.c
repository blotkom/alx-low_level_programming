#include "lists.h"

/**
 * pop_listint - A funchead node of a list
 * and retur node's data n.
 * @head: A pointer tructure.
 * Return: The head node's da element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
