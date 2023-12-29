#include <stdio.h>
/**
 * main - starting point
 * Return: zero if success
 */
int main(void)
{
	char alpha = 97;

	for (; alpha <= 122; alpha++)
	{
		if ((alpha == 'q') || (alpha == 'e'))
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
