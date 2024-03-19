#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_number - function that print number
 * @n: number to print
 */
#include "main.h"

void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		print_number(-(n / 10));
		_putchar('0' + (-(n % 10)));
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		if (n < 10)
			_putchar('0' + n);
		else
		{
			print_number(n / 10);
			_putchar('0' + (n % 10));
		}
	}
}
