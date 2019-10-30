#include "sort.h"

/**
 * swap - swaps two elements
 * @ip: iterative elemnt
 * @jp: iterative +1
 */
void swap(int *ip, int *jp)
{
	int temp = *ip;

	*ip = *jp;
	*jp = temp;
}

/**
 * bubble_sort - bubble sort method
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int nj = 0, ni = (size - 1);

	for (i = 0; i < ni; i++)
	{
		nj = (size - i - 1);

		for (j = 0; j < nj; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/*
 * int main()
 * {
 *	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
 *	size_t n = sizeof(array)/sizeof(array[0]);
 *	print_array(array, n);
 *	printf("\n");
 *	bubble_sort(array, n);
 *	printf("\n");
 *	print_array(array, n);
 *	return (0);
 * }
 */
