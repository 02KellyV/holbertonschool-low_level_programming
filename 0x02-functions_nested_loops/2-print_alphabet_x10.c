#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10 (void)
{
	char alp = 'a';

	while (alp <= 'z')
	{

		_putchar (alp);
		alp ++;

	}

	_putchar ('\n');
	return;
}
