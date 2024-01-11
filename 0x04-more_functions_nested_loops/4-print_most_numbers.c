#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 exept 2 and 4
 * Return: void
*/
void print_most_numbers(void)
{
	int num = 48;

	for (; num < 58; num++)
	{
		if ((num != 50) && (num != 52))
		{
			_putchar(num);
			if (num == 57)
				_putchar('\n');
		}
	}
}
