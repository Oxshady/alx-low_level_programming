#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: first node of the list that i will free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer = NULL;

	while (head)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}
