#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the charachter we will check if it binary to convert;
 * Return: uns integer that represent in mem the bin in str after converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, digit;
	int length = 0, i, ii;
	char *ptr;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	*ptr = (char *)malloc(length + 1);
	if (ptr == NULL)
		return (0);
	ii = 0;
	while (length > 0)
	{
		length--;
		ptr[ii++] = b[length];
	}
	ptr[ii] = '\0';
	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] != '0' && ptr[i] != '1')
		{
			(ptr);
			return (0);
		}
		digit = ptr[i] - '0';
		conv |= (digit << i);
	}
	free(ptr);
	return (conv);
}
