#include <stdlib.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string to search for a character in it
 * @c: the character we search for
 * Return: th address of the character
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *ptr;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &(s[i]);
			return (ptr);
		}
		i++;
	}
	return (NULL);
}

