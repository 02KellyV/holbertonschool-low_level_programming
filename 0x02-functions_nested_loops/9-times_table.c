#include "holberton.h"

int _putchar(char c);

/**
 * print_times_table - prints the 9 times table starting w/zero
 * @n: number passed from main to specify width of times table
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int n = 9;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((j * i) + '0');
			}
			else if ((i * j) < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((((j * i)/ 10)% 10)+ '0');
				_putchar(((j * i)% 10)+ '0');
			}
			if (j != (n))
			{
			_putchar(',');
			}
		}
		_putchar('\n');
	}

}
