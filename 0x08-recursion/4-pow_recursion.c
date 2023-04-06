#include "main.h"
/**
 * _pow_recursion - function to return x raised to power of y
 * @x: base integer
 * @y: exponent integer
 *
 * Return: value of x raised to power of y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
