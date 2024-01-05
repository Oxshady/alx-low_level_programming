#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the start of the range
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					if (n < -9)
					{
						n *= -1;
						_putchar('0' + (n / 10));
						_putchar('0' + (n % 10));
					}
					else
					{
					n *= -1;
					_putchar('-');
					_putchar('0' + n);
					}
				}
				else
					_putchar('0' + n);
			}
			else 
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
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
			if (n > 99)
			{
				_putchar('0' + ((n / 10) / 10));
				_putchar('0' + ((n / 10) % 10));
				_putchar('0' + (n % 10));
				if (n > 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
		}
	}
}
