#include "main.h"
/**
 * rev_string - function that reverse the string characters
 * @s: the string to reverse
*/
void rev_string(char *s)
{
	int i = 0, y = 0;

	char arr[100];
	
	while ((*(s + i) != 0))
	{
		arr[i] = s[i];
		i++;
	}
	i -= 1;
	while(i >= 0)
	{
		s[y] = arr[i];
		i--;
		y++;
	}
}