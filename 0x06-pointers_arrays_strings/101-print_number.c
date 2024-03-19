#include "main.h"
/**
 * print_number - function that print number
 * @n: number to print
*/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n < 10 && n >= 0)
		_putchar('0' + n);
	else if (n < 100 && n >= 10)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 10) / 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar('0' + ((n / 10) / 10) / 10);
		_putchar('0' + ((n / 10) / 10) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 10000 && n < 100000)
	{
		_putchar('0' + (((n / 10) / 10) / 10) / 10);
		_putchar('0' + (((n / 10) / 10) / 10) % 10);
		_putchar('0' + ((n / 10) / 10) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
}
