#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j = 49, y = 50;
		while (i < 58)
		{
			while (j < 58)
			{
				while (y < 58)
				{
					putchar(i);
					putchar(j);
					putchar(y);

					if (i != 55 || j != 56 || y != 57)
					{
						putchar(',');
						putchar(' ');
					}
					y++;
				}
				j++;
			}
			i++;
			j = i + 1;
			y = j + 1;
		}
		putchar('\n');
		return (0);
}
