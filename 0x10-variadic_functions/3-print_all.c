#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	unsigned int i = 0, j, comma_needed = 0;
	char *str;
	const char valid_types[] = "cifs";

	va_start(args_list, format);
	while (format && format[i])
	{
		j = 0;
		while (valid_types[j])
		{
			if (format[i] == valid_types[j] && comma_needed)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args_list, int)), comma_needed = 1;
			break;
		case 'i':
			printf("%d", va_arg(args_list, int)), comma_needed = 1;
			break;
		case 'f':
			printf("%f", va_arg(args_list, double)), comma_needed = 1;
			break;
		case 's':
			str = va_arg(args_list, char *), comma_needed = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args_list);
}
