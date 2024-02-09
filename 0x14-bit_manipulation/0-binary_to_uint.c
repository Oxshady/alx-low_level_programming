#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the charachter we will check if it binary to convert
 * Return: uns integer that represent in mem the bin in str after converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		digit = digit * 2 + (b[i++] - '0');
	}
	return (digit);
}



