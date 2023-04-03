#include "main.h"

/**
 * _memset - _memset() function fills the first n bytes 
 * of the memory pointed to
 * by s with the constant byte b
 * @s: pointer to output
 * @b: data of input
 * @n: how many bytes
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++) {
        *(s + i) = b;
    }

    return s;
}
