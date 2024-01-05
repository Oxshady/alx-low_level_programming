#include "main.h"
/**
 * jack_bauer - this function for printing hours with minitues and seconds
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (c > 5)
						break;
					if (a > 2)
						break;
					if ((a == 2) && (b > 3))
						break;
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
