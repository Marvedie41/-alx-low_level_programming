#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 *
 * @str: the string to print
 *
 * Description: Prints a string of characters to stdout, followed by a newline.
 */

void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str++);
    }

    _putchar('\n');
}
