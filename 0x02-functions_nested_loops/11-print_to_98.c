#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the start of the range
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar('0' + n);
			if (n < 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar('0' + n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
