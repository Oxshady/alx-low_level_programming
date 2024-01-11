#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of - in the straight line
*/
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('-');
			if (i == (n - 1))
				_putchar('\n');
		}
	}
}
