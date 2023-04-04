#include "main.h"
/**
 * _strchr - function to locates a character in a string
 * @s: string that may contain character c
 * @c: character to be found
 *
 * Return: if c is found return pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
