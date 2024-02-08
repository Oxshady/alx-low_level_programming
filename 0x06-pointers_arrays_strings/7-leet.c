/**
 * leet -  function that encodes a string into 1337 --> (eleet)
 * @str: the string to encode
 * Return: the address of the first char of the str
*/
char *leet(char *str)
{
	int i = 0, ii = 0;
	char *string1 = "aeotlAEOTL";
	char *replace = "4307143071";

	while (str[i] != '\0')
	{
		while (string1[ii] != '\0')
		{
			if (str[i] == string1[ii])
				str[i] = replace[ii];
			ii++;
		}
		i++;
		ii = 0;
	}
	return (str);
}
