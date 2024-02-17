/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string which consist in it's init seg the some bytes same accept bytes
 * @accept: consist of bytes to check in init seg in s
 * Return: the length of a prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, ii = 0, lenght = 0;

	while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
	{
		while (accept[ii] != '\0')
		{
			if (s[i] == accept[ii])
				lenght++;
			ii++;
		}
		i++;
		ii = 0;
	}
	return (lenght);
}
