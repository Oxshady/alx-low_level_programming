#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the address of the first node of doubly linked list
 * @n: value to add to the property n of the new node
 * Return: the address of new node or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = node;
	node->prev = curr;
	node->next = NULL;
	return (node);
}
