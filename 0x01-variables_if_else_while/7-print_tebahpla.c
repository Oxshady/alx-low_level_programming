#include <stdio.h>
/**
 * main - starting point
 * Return: zero if success
 */
int main(void)
{
	char alpha = 122;

	for (; alpha >= 97; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
