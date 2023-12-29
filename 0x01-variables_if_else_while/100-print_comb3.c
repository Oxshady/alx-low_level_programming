#include <stdio.h>
/**
 * main - starting point
 * Return: zero if success
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if ((x != y) && (y > x))
			{
				putchar('0' + x % 10);
				putchar('0' + y % 10);
				if (!((x == 8) && (y == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
