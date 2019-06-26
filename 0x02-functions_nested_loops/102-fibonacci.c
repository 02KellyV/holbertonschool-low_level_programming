#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 0;
	unsigned long int aft = 1;

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	printf("\n");
	return (0);
}
