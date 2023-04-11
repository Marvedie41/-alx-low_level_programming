#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string ti concatenate
 *
 * Return: concatenate of two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	x = malloc(sizeof(char) * (i + j + 1));

	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		x[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		x[k] = s2[j];

	return (x);
}
