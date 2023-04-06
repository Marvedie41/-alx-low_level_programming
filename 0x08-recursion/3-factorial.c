#include "main.h"
/**
 * factorial - function to get factorials
 * @n: number to get its factorial
 *
 * Return: if n is lower than 0 return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
