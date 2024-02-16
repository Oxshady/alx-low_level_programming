/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block of memory to filled by memset
 * @b: constant byte that we will fill the block of bytes by it
 * @n: the size of block
 * Return: the address of the first byte of the block we filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
