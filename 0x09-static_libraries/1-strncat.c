#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: string to be appended
 * @src: string to be completed on @dest
 * @n: integer
 *
 * Return: new string @dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0,
	l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
