#include "monty.h"
/**
 * _pall - function that dispaly all items of the stack
 * @top: pointer to pointer to the stack
 * @num: number of lines but unused here
*/
void _pall(stack_t **top, unsigned int num)
{
	stack_t *tmp = *top;

	(void)num;
	if (*top == NULL)
		return;
	while (*top)
	{
		tmp = *top;
		(*top) = (*top)->next;
		printf("%i\n", tmp->n);
	}
}
