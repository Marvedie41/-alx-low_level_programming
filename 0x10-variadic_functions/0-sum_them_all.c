#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @num_args: number of arguments
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int num_args, ...)
{
	va_list arg_list;
	unsigned int i;
	int sum = 0;

	if (num_args == 0)
		return (0);

	va_start(arg_list, num_args);

	for (i = 0; i < num_args; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (sum);
}
