#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


int main(void)
{
    print_alphabet();
    return (0);
}


void print_alphabet (void)
{
	char alp = a;

	while (alp <= 'z')
	{

		_putchar (alp);
		alp ++;

	}

	putchar ('\n');
	return;
}
