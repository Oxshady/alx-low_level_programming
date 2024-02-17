#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first str to search on it
 * @accept: contatins the bytes we search of it's occ in str s
 * Return: the location of occurrence
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, ii = 0;

	while (s[i] != '\0')
	{
		while (accept[ii] != '\0')
		{
			if (s[i] == accept[ii])
				return (&s[i]);
			ii++;
		}
		ii = 0;
		i++;
	}
	return (NULL);
}
