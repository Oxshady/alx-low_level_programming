#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	char character = 97;

	for (; character <= 122; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
