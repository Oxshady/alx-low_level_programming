#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of - in the straight line
*/
void print_line(int n)
{
	int i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			_putchar('-');
			if (i == (n - 1))
				_putchar('\n');
		}
	}
}
