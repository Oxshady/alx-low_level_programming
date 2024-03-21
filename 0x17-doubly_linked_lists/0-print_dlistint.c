#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: double linked list to print it's elements
 * Return: number of elements of the doubly linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t x = 0;

	while (curr)
	{
		printf("%i\n", curr->n);
		x++;
		curr = curr->next;
	}
	return (x);
}
