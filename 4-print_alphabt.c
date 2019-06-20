#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point.
* Return: 0 (success).
*/

int main(void)
{
	n = 'a';

	while (n <= 'z'){
		if (n != 'e' && n != 'q'){
			putchar(n);
		}
		n+1;
	}
	putchar('\n');
	return (0);
}

