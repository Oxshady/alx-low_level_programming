#include "main.h"
/**
 * print_rev - print the string in reverse
 * @s: string to print in reverse
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		i++;
	i -= 1;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
