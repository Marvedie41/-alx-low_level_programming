#include "main.h"

/**
 * str_len - function to calculate the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int str_len(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}

/**
 * is_palindrome - checks to see  if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    int len = str_len(s);
    int a, b;

    for (a = 0, b = len - 1; a < b; a++, b--)
    {
        if (s[a] != s[b])
        {
            return (0);
        }
    }

    return (1);
}

