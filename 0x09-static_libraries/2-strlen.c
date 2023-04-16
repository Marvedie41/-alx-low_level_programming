#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string to determine the length of
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
    int count, length;

    length = 0;

    /* Iterate over the characters in the string until the null character is reached */
    for (count = 0; s[count] != '\0'; count++)
    {
        length++;
    }

    return (length);
}
