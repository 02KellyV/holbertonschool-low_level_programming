#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - this is awesome
 * @s: pointer to char params
 *
 * Return: *s
 */

char *cap_string(char *s)
{
	int i;
	int j;

	char sp[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;

				for (j = 0; sp[j] != '\0'; j++)
				{
					if (s[i] == sp[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						s[i + 1] -= 32;
					}
				}
		}
	}
	return (s);
}
