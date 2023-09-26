#include "lists.h"

/**
 * free_listint - A functiees a linked list
 * @head: A pointint_t structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
