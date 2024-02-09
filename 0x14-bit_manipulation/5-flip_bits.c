/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: represents one of the numbers that are being compared
 * @m: It represents the other number that is being compared to n
 * Return: the desired bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int flipped_bits = 0;

	while (result > 0)
	{
		if (result & 1)
			flipped_bits++;
		result >>= 1;
	}
	return (flipped_bits);
}
