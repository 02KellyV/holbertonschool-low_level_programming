#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	char letter = 'a';

	while (letter <= 'z'){
		putchar(letter++);
	}
	putchar('\n');
	return (0);
}
