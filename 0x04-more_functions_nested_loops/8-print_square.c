#include "main.h"
/**
 * print_square - function that prints a square
 * @size: the size of the square
*/
void print_square(int size)
{
	int c1, c2;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c1 = 0; c1 < size; c1++)
		{
			for (c2 = 0; c2 < size; c2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
