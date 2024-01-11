#include "main.h"
/**
 * _isupper - chech if character is upper or lower case
 * @c:the character we will checked
 * Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
