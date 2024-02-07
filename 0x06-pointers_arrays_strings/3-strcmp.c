#include "main.h"
/**
 * _strcmp - compare two strings lexicographically
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 is greatest -15 if s1 is smallest 0 if both are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	if (*s1 == '\0')
		return (-15);
	if (*s2 == '\0')
		return (15);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (*s1 - *s2);
		if (s2[i] == '\0' && s1[i] != '\0')
			return (*s1 - *s2);
		if (s1[i] == s2[i])
			result = 0;
		i++;
	}
	return (result);
}
