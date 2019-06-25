#include <stdio.h>

/**
 * fibonacci - Entry point
 *
 * Return: Always 0 (Success)
 */

void fibonacci(void)
{

	long int lim = 4000000;
	long int aft = 1;
	long int bef = 0;
	long int R = 0;
	long int sum = 0;

	while (lim > R)
	{

		R = bef + aft;

		if ((R % 2) == 0)
		{
			sum += R;
		}

		bef = aft;
		aft = R;

	}

	printf("%ld\n", sum);

}
