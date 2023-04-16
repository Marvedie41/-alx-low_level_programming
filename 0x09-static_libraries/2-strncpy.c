#include "main.h"

/**
 * _strncpy - copies a string, including the terminating null byte,
 * using at most an inputted number of bytes
 *
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of bytes to copy
 *
 * Return: pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy characters from source string to destination string */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Fill the remainder of the destination string with null bytes */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
