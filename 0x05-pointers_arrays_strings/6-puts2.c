#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to work on
*/
void puts2(char *str)
{
	int i = 0, y;

	while (str[i] != 0)
		i++;
	for (y = 0; y < i; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
