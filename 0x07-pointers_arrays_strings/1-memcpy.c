/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src:  pointer to the source memory area
 * @n: the number of bytes to copy
 * Return: the address of the first byte of the des memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	i = 0;
	while (i < n)
	{
		if (dest[i] == '\0' || src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
