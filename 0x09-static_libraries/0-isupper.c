#include "main.h"

/**
 * _isupper - function to verify if character is uppercase.
 * @c: character to test.
 *
 * Return: 1 if uppercase or 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}