#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = a;
	}
	return (i);
}
