#include <holberton.h>

/**
 * fibonacci2 - Entry point
 *
 * Return:  (Success)
 */

void fibonacci2(void)
{

long int bef = 0;
long int aft = 1;
long int R = 0;
int i = 0;

	for (i = 0; i < 100; i++)
	{
		R = bef + aft;
		bef = aft;
		aft = R;
		printf("fibonacci: %ld \n", R);
	}

}
