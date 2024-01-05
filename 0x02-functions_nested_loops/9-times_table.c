#include "main.h"
/**
 * times_table - print times 9 table
 * Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if ((x * y) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (x * y));
				if (y < 9)
					_putchar(',');
			}
			if ((x * y) >= 10)
			{
				_putchar(' ');
				_putchar('0' + ((x * y) / 10));
				_putchar('0' + ((x * y) % 10));
				if (y < 9)
					_putchar(',');
			}
			if (y == 9)
				_putchar('\n')
		}
	}
}
