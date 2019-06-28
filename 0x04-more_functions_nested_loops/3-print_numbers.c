#include "holberton.h"

int _putchar(char c);

/**
 * print_numbers - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */


void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
