/**
 * rot13 -  function that encrypt a string using rot13 technique
 * @str: string to encrypt it
 * Return: the address of the first char of the encrypted string
*/
char *rot13(char *str)
{
	int i = 0, ii = 0;
	char *validation = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		while (validation[ii] != '\0')
		{
			if (str[i] == validation[ii])
			{
				str[i] = replace[ii];
				break;
			}
			ii++;
		}
		ii = 0;
		i++;
	}
	return (str);
}
