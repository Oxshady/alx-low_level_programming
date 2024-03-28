#include "monty.h"
/**
 * _pop - function that the top of the stack
 * @top: pointer to pointer to the stack
 * @line_number: number of lines but unused here
*/
void _pop(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;

	(void)line_number;
	if (*top == NULL)
	{
		return;
	}
	*top = (*top)->next;
	free(temp);
	if (*top != NULL)
	{
		(*top)->prev = NULL;
	}
}
