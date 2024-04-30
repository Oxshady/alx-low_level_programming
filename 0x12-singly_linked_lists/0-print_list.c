#include "lists.h"
/**
 * print_list - function that print the values of all nodes
 * @h: pointer to first node
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	int list_size = 0;

	for (; curr != NULL; curr = curr->next)
	{
		list_size++;
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);
	}
	return (list_size);
}
