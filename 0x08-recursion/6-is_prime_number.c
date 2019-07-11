#include "holberton.h"

int tmp_prime(int n, int i);

/**
 * is_prime_number - number is prime?
 * @n: integer params
 * Return: boolean
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * tmp_prime - actual prime
 * @n: integer params
 * @i: integer params
 * Return: recursion
 */

int tmp_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
