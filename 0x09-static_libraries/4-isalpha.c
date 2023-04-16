#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetical
 *
 * @c: The character to be verified
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

