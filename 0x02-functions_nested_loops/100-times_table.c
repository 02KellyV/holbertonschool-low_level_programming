#include "holberton.h"

int _putchar(char c);

/**
 * print_times_tables - integer
 *
 * purpose
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n > 0 && n < 15)
	{

		for (i = 0; i < n; i++)
		{

			for (j = 0; j < n; j++)
			{

	                        _putchar(j*i);
        	                _putchar(',');

				if ((i*j) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}

				else if ((i*j) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}

				else if ((i*j) < 1000)
				{
					_putchar(' ');
				}

			_putchar(j*i);
			_putchar(',');

			}

		_putchar('\n');

		}

	}

}
