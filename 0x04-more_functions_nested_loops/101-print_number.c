#include "main.h"
/**
 * print_number - print any integer value comes from parameter
 * @n: integer to print
*/
void print_number(int n)
{
	if ((n >= 0) && (n < 10))
		_putchar('0' + n);
	else if ((n > 9) && (n < 100))
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if ((n > 99) && (n < 1000))
	{
		_putchar('0' + ((n / 10) / 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n > 999)
	{
		_putchar('0' + (((n / 10) / 10) / 10));
		_putchar('0' + (((n / 10) / 10) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if ((n < -9))
	{
		n *= -1;
		_putchar('-');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
}
