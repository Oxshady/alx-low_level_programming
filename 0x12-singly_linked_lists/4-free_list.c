#include "lists.h"
/**
 * free_list - function that free the list
 * @head: pointer to first node
*/
void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		while (head != NULL)
		{
		tmp = head;
		head = head->next;
		if (tmp->str != NULL)
			free(tmp->str);
		}
		free(tmp);
	}
}
