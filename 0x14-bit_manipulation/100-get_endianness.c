#include "main.h"
/**
 * get_endianness - function that checks the endianness of the current arch
 * Return: 1 if little en 0 if big en
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
