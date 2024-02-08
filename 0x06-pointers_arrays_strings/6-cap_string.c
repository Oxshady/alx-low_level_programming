#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: the string to capitalizes it's words
 * Return: the address of the first char in string
*/
char *cap_string(char *str)
{
	int i  = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] ^= (1 << 5);
		}
		else
		{
			if ((str[i] >= 97 && str[i] <= 122))
			{
			switch (str[i - 1])
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\n':
			case '\t':
			case ' ':
			case '{':
			case '}':
			case '(':
			case ')':
			case '"':
				str[i] ^= (1 << 5);
				break;
			default:
				break;
			}
		}
		}
		i++;
	}
	return (str);
}
