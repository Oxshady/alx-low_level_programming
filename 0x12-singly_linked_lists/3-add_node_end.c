#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer to first element in the list
 * @str: string to set structure str member
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (str != NULL && new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (new_node->str != NULL)
	{
		new_node->len = strlen(new_node->str);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new_node;
	return (new_node);
}
