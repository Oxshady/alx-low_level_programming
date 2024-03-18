#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	int n1 = 0, n2 = 0;

	for (; n1 < 100; n1++)
	{
		for (n2 = n1 + 1; n2 < 100; n2++)
		{
			putchar('0' + n1 / 10);
			putchar('0' + n1 % 10);
			putchar(' ');
			putchar('0' + n2 / 10);
			putchar('0' + n2 % 10);
			if (n1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
