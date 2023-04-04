#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: string to be searched.
 * @accept: The set of bytes to be matched.
 *
 * Return: if set is matched retrun pointer else Null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
