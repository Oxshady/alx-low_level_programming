#include "main.h"
/**
 * _strcmp - compare two strings lexicographically
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 is greatest -15 if s1 is smallest 0 if both are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0, y = 0, result;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (*s1 == '\0')
		return (y);
	if (*s2 == '\0')
		return (x);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (i - y);
		if (s2[i] == '\0' && s1[i] != '\0')
			return (x - i);
		if (s1[i] == s2[i])
			result = 0;
		i++;
	}
	return (result);
}
