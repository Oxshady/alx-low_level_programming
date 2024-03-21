#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: value to store in the new node
 * Return: pointer to the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	unsigned int i = 0;
	dlistint_t *newNode;

	if (!h)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (node && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	if (!node)
	{
		free(newNode);
		return (NULL);
	}
	newNode->prev = node;
	newNode->next = node->next;

	if (node->next != NULL)
		node->next->prev = newNode;
	node->next = newNode;
	return (newNode);
}
