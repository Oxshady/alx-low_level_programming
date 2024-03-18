#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
#include <stdio.h>

int main(void)
{
	int num1, num2 = 1;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 1; num2 < 100; num2++)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);

			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
