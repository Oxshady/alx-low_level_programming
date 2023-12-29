#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	char alpha = 97;

	for (; alpha <= 122; alpha++)
		putchar(alpha);
	alpha = 65;
	for (; alpha <= 90; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
