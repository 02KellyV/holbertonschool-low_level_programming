#include "holberton.h"

/**
 * sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */

int sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root
 * @n: integer parameter
 * Return: recursion
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (isSqrt(n, 1));
}
