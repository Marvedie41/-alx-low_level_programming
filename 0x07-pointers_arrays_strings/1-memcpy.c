include "main.h"
/**
 *_memcpy - function copies from @src to @dest
 *@src: pointer to source memory area
 *@dest: pointer to destination memory area
 *@n: number of iterations before quitting
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
