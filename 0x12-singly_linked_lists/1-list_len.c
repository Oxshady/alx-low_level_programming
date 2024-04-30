#include "lists.h"
/**
 * list_len - return number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	int number_of_elem = 0;

	for (; curr != NULL; curr = curr->next)
		number_of_elem++;
	return (number_of_elem);
}
