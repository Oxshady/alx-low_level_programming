#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	int oneX, oneY, twoX, twoY;

	for (oneX = 0; oneX < 10; oneX++)
	{
		for (oneY = 0; oneY < 9; oneY++)
		{
			for (twoX = 0; twoX < 10; twoX++)
			{
				for (twoY = 1; twoY < 10; twoY++)
				{
				if ((twoX >= oneX) && (twoY > oneY))
				{
				putchar('0' + oneX % 10);
				putchar('0' + oneY % 10);
				putchar(' ');
				putchar('0' + twoX % 10);
				putchar('0' + twoY % 10);
				if (!(oneX == 9 && oneY == 8))
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
