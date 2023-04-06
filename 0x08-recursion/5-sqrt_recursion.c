#include "main.h"
/**
 * _sqrt_recursion - function to get natural square root
 * @n: number
 *
 * Return: natural square root of n, or -1 if n does not have a square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: number
 * @i: number
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
