#include <stdio.h>


/**
 * sums - Entry point
 *
 * Return:  (Success)
 */

void fibonacci(int lim);


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{


int lim  = 50;
fibonacci(lim);
return (0);

}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void fibonacci(int lim)
{

long int bef = 0;
long int aft = 1;
long int R = 0;
int i = 0;

for (i = 0; i < lim; i++)
{
	R = bef + aft;
	bef = aft;
	aft = R;
	printf("fibonacci: %ld \n", R);
}

return;
}
