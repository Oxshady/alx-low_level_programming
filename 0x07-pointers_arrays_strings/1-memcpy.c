/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src:  pointer to the source memory area
 * @n: the number of bytes to copy
 * Return: the address of the first byte of the des memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, ii = 0;

	while (src[i] != '\0')
		i++;
	while (dest[ii] != '\0')
		ii++;
	if (i <= n || ii <= n)
		return (0);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
