#include "main.h"
/**
 * print_alphabet - printing lower case characters
 * Return: void
 * Description: printig the alphatic characters in lower case using putchar
 */
void print_alphabet(void)
{
	for (int i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
