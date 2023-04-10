#include "main.h"
/**
 *_memcpy - copies bytes from memory src to memory dest
 *@dest: pointer to where bytes are copied to 
 *@src: pointer to where bytes are copied from
 *@n: number of bytes to copy
 *
 *Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
