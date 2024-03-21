#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: the address of the first node in the list
 * Return: the sum of all data in the list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
