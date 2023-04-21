#include "variadic_functions.h"

/**
 * print_numbers - prints a sequence of numbers separated by a given string.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
