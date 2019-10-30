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

	if (size < 2 || !array)
		return;

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
