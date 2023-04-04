include "main.h"

/**
 *_memcpy - function copies
 *@dest: pointer to memory destination
 *@src: pointer to memory source
 *@n: number of bytes to copy
 *Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
