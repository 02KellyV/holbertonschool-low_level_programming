#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - taking the last number
*Return: 0 (success)
*/
int main(void)
{
	int n = 0;
	int RAND_MAX = 100;
	int mod = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( mod > 5 && mod != 0){
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	else if (mod < 5 && mod != 0){
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, mod);
	}
	else {
		printf("Last digit of %d is %d and is 0\n", n, mod);

	}
	return (0);
}

