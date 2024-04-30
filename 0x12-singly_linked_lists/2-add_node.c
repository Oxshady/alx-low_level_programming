#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer that hold the address of first node
 * @str: string value to set struct str member
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
