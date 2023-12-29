#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	int x = 0;

	for (; x < 10; x++)
	{
		putchar('0' + x % 10);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
