#include "main.h"
/**
 * _islower - check if letter is lowercase or not
 * @c: ascii code of char
 * Return: 1 if lower case and zero otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
