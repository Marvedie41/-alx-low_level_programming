#include "main.h"

/**
 * isdivisible - function to check if primenumber
 * @b: number
 * @a: number
 * Return: boolean
 */

int isdivisible(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	else if (a / 2 > b)
	{
		return (isdivisible(b + 2, a));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function to get prime numbers
 * @n: number
 * Return: 0 if not prime number
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (isdivisible(3, n));
	}
}
