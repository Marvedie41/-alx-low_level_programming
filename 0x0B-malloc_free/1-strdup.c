#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of characters
 */

char *_strdup(char *str)
{
	char *x;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	x = (char *)malloc(sizeof(char) * (a + 1));

	if (x == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		x[b] = str[b];

	return (x);
}
