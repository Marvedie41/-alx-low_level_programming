#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings
 * @separator: The string to print between strings
 * @n: The number of strings to print
 *
 * Return: No return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int str_count;
	char *current_str;

	va_start(arg_list, n);

	for (str_count = 0; str_count < n; str_count++)
	{
		current_str = va_arg(arg_list, char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (str_count < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_list);
}
