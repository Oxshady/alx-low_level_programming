#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n: the number of / character
*/
void print_diagonal(int n)
{
	int c1, c2;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c1 = 0; c1 < n; c1++)
		{
			for (c2 = 0; c2 < c1 ; c2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
