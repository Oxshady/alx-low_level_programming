#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the start of the range
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98 && n < 100)
	{
		for (; n >= 98; n--)
		{
			_putchar('0' + (n / 10)), _putchar('0' + (n % 10));
		}
	}
	else if (n > 99)
	{
		_putchar('0' + (n / 10) / 10), _putchar('0' + (n / 10) % 10);
		_putchar('0' + (n % 10));
	}
	else if (n <= 98 && n >= 10)
	{
		_putchar('0' + (n / 10)), _putchar('0' + (n % 10));
	}
	else if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	else if (n < 0 && n > -10)
	{
		_putchar('-'), _putchar('0' + (n * -1));
	}
	else if (n < -9 && n > -100)
	{
		_putchar('-'), _putchar('0' + ((n * -1) / 10));
		_putchar('0' + ((n * -1) % 10);
	}
	else if (n < 0 && n < -99)
	{
		_putchar('-'), _putchar('0' + (((n * -1) / 10) / 10));
		_putchar('0' + (((n * -1) / 10) % 10)), _putchar('0' + ((n * -1) % 10));
	}
	if (n != 98)
		_putchar(','), _putchar(' ');
	else
		_putchar('\n');
}
