#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position in list
 * @head: pointer to the pointer to the head of the doubly linked list
 * @index: index of the node to delete
 * Return: 1 success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (!curr)
		return (-1);
	curr->prev->next = curr->next;
	if (curr->next)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
