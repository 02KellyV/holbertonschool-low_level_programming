#include "holberton.h"

/**
 * wildcmp - Compar strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	int i;
	char j;

	i = 1;
	j = '0';

	if (s1 == s2)
	{
		j = *s1;

		if (j == '0')
		{
			s1 = s2;
		}
		i++;
	}

	else
	{
		s1 = s2 + 2;
	}
	return (0);
}
