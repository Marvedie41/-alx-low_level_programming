#include "main.h"
/**
 * _sqrt - function to get natural square root
 * @n: number
 * @i: number to help in looping
 *
 * Return: natural square root of n, or -1 if n does not have a square root
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
