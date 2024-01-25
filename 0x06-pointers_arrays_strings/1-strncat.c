#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings, it will use at most n bytes from src
 * @dest: the string we will overwrite
 * @src: the string to append
 * @n: number of bytes from src string
 * Return: address of first element in dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, ii = 0;

	while (*(dest + i) != '\0')
		i++;
	while (ii < n && *(src + ii) != '\0')
	{
		*(dest + i) = *(src + ii);
		i++, ii++;
	}
	return (dest);
}
