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
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}

		s++;
	}
}
