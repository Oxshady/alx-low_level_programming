#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: address of the first node in the list
 * @index: the index of node we want
 * Return: the address of the node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
		{
			return (node);
		}
		else
		{
			node = node->next;
			i++;
		}
	}
	return (NULL);
}
