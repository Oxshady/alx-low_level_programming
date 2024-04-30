#include "lists.h"

/**
 * free_list - function that frees the list
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		if (tmp->str != NULL)
			free(tmp->str);

		free(tmp);
	}
}
