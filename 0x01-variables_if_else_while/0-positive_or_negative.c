#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int n = 0;
	int RAND_MAX = 100;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n == 0){
		printf("is zero %d.\n", n);

	}else if (n < 0){
		printf("is positive %d.\n", n);

	} else if (n > 0){
		printf("is negative %d.\n", n);
	}

	return (0);
}
