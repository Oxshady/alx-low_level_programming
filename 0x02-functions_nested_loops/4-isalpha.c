#include "main.h"
/**
 * _isalpha - check if the given parameter is alphatic char or not
 * @c: given character to check
 * Return: 1 if it char 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
