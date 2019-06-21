#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point.
* Return: 0 (success).
*/

int main(void)
{
	char n = 'a';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

