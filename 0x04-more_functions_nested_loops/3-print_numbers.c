#include "main.h"
/**
 * print_numbers - print the numbers from zero to nine
 * Return: void
*/
void print_numbers(void)
{
	int c = 48;

	for (; c < 58; c++)
	{
		_putchar(c);
		if (c == 57)
			_putchar('\n');
	}

}
