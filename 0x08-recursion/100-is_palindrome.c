#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string recursively.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * stringchecker - Recursively checks if a string is a palindrome.
 * @s: Pointer to the string.
 * @l: Position to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int stringchecker(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (stringchecker(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (stringchecker(s, len - 1));
}
