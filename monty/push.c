#include "monty.h"
/**
 * _push - function that add item to the top of stack
 * @top: pointer to pointer to the stack
 * @data: data to assign to new item
*/
void _push(stack_t **top, unsigned int data)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = data;
	new_node->prev = NULL;
	if (*top == NULL)
	{
		new_node->next = NULL;
		*top = new_node;
		return;
	}
	new_node->next = *top;
	(*top)->prev = new_node;
	*top = new_node;
}
