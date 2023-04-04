#include "main.h"
/**
 * _strchr - function to locates a character in a string
 * @s: string that may contain character c
 * @c: character to be found
 *
 * Return: if c is found return pointer to first occurence
 * if c not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
