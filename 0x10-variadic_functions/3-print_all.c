#include "variadic_functions.h"

/**
 * print_all - Prints any combination of characters, integers, floats, and strings
 * @format: A string containing the format of the arguments to be printed
 *
 * Return: No return value
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i = 0, j, comma_flag = 0;
	char *str;
	const char type_arg[] = "cifs";  /* valid format specifiers */

	va_start(arg_list, format);

	while (format && format[i])
	{
		j = 0;
		while (type_arg[j])
		{
			if (format[i] == type_arg[j] && comma_flag)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int));
			comma_flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg_list, int));
			comma_flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double));
			comma_flag = 1;
			break;
		case 's':
			str = va_arg(arg_list, char *);
			comma_flag = 1;
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

	va_end(arg_list);
}
