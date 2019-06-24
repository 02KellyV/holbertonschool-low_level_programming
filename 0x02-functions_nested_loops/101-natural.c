#include <stdio.h>


/**
 * sums - Entry point
 *
 * Return:  (Success)
 */

int sums(int lim);


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int lim  = 1024;
int res;
res = sums(lim);
printf("%d", res);
return (0);

}



/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int sums(int lim)
{

int m3 = 3;
int m5 = 5;
int i = 0;
int R = 0;

while (i == 0)
{

	if (m3 < lim)
	{
		R += m3;
		m3 += 3;
	}

	if (m5 < lim)
	{
		R += m5;
		m5 += 5;
	}

	if (lim <= m3 && lim <= m5)
	{
		i = 1;
	}

}

return (R);

}
