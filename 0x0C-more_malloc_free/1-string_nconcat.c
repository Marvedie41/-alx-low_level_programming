#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @str1: first string
 * @str2: second string
 * @n: maximum number of bytes from str2 to concatenate
 *
 * Return: pointer to the concatenated string or NULL if malloc fails.
 */

char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *concatenated_str;
	unsigned int len1 = 0, len2 = 0, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	while (str1[len1] != '\0')
	{
		len1++;
	}

	while (str2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	concatenated_str = malloc((len1 + n + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated_str[i] = str1[i];
	}

	for (; i < (len1 + n); i++)
	{
		concatenated_str[i] = str2[i - len1];
	}
	concatenated_str[i] = '\0';

	return (concatenated_str);
}
