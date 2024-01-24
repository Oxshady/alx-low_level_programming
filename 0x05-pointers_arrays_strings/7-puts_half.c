#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: string to print it's second half
*/
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
		i++;
	if (i % 2 == 0)
		i /= 2;
	else
		i = ((i - 1) / 2);
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
