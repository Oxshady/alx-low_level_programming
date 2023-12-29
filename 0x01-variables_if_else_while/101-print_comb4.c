#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = 1; y < 9; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if ((x != y && y != z) && (z != x))
				{
					if ((y > x) && (z > y))
					{
					putchar('0' + x % 10);
					putchar('0' + y % 10);
					putchar('0' + z % 10);
					if (!((x == 7 && y == 8 && z == 9)))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
