#include "holberton.h"

/**
 * sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
        return (recursive_root(n, 1));
}
