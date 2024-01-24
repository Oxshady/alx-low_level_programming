#include "main.h"
/**
 * print_array - is a function to print the array of integers using putchar
 * @a: address of the first location of array
 * @n: the size of array
*/
void print_array(int *a, int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
	int i = 0;

	for (; i < n; i++)
	{
		if (a[i] < 0)
			a[i] *= -1, _putchar('-');
		if (a[i] < 10)
			_putchar('0' + n);
		else if (a[i] > 9 && a[i] < 100)
		{
			_putchar('0' + (a[i] / 10)), _putchar('0' + (a[i] % 10));
		}
		else if (a[i] > 99 && a[i] < 1000)
		{
			_putchar('0' + (a[i] / 10) / 10);
			_putchar('0' + (a[i] / 10) % 10), _putchar('0' + (a[i] % 10));
		}
		else if (a[i] > 999 && a[i] < 10000)
		{
			_putchar('0' + ((a[i] / 10) / 10) / 10);
			_putchar('0' + ((a[i] / 10) / 10) % 10);
			_putchar('0' + (a[i] / 10) % 10), _putchar('0' + (a[i] % 10));
		}
		else if (a[i] > 999999)
		{
			_putchar('0' + (a[i] / 10) / 10 / 10 / 10 / 10 / 10);
			_putchar('0' + (a[i] / 10) / 10 / 10 / 10 / 10 % 10);
			_putchar('0' + (a[i] / 10) / 10 / 10 / 10 % 10);
			_putchar('0' + (a[i] / 10) / 10 / 10 % 10);
			_putchar('0' + (a[i] / 10) / 10 % 10);
			_putchar('0' + (a[i] / 10) % 10);
			_putchar('0' + (a[i] % 10));
		}
		if (a[i] == (a[n - 1]))
			_putchar('\n');
		else
			_putchar(','), _putchar(' ');
	}
	}
}
