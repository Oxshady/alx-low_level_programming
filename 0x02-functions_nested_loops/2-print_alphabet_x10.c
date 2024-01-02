#include "main.h"
/**
 * print_alphabet_x10 - printing the alphabet chars 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int times, character;

	for (times = 0; times < 10; times++)
	{
		for (character = 97; character <= 122; character++)
			_putchar(character);
		_putchar('\n');
	}
}
