#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
*/
void more_numbers(void)
{
	int num, i , firstn , secondn;

	for(i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num < 10)
				firstn = num;
			else if (num > 9)
			{
				firstn = num / 10;
				secondn = num % 10;
			}
			_putchar('0' + firstn);
			if (num > 9)
				_putchar('0' + secondn);
			if (num == 14 && i != 9)
				_putchar('\n');
		}
	}
}
