/**
 * string_toupper - function that changes all lowercase string to uppercase
 * @str: address of the string that will be converted to uppercase
 * Return: address of the first MSU of str
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] ^= (1 << 5);
		i++;
	}
	return (str);
}
