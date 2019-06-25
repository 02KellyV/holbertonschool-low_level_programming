#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/**
 * _abs - check the code for Holberton School students.
 *
 * @param ab an integer argument
 *
 * Return: Always 0.
 */

int print_last_digit(int last)
{
	int l = last % 10;

	printf("%d\n", l);
	return (0);
}
