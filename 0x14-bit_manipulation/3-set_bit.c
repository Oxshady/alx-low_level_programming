#include "main.h"
/**
 * set_bit - function that returns the value of a bit at a given index
 * @n: pointer to block of bytes of unsinged type
 * @index: the index of the required bit
 * Return: the desired bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
