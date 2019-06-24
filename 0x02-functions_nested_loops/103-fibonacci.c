#include <stdio.h>

/**
 * sums - Entry point
 *
 * Return:  (Success)
 */

long int evenval(long int lim);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

long int lim = 4000000;
long int res;
res = evenval(lim);
printf("resp: %ld \n", res);
return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

long int evenval(long int lim)
{

int aft = 1;
int bef = 0;
int R = 0;
int sum = 0;

while (R < lim)
{
	R = bef + aft;

	if (R % 2 == 0)
	{
		sum += R;
	}

	bef = aft;
	aft = R;
}

return (R);
}
