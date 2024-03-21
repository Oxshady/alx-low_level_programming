#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: start of doubly linked list to count it's elements
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t lenght = 0;

	while (curr)
	{
		lenght++;
		curr = curr->next;
	}
	return (lenght);
}
