#include "search_algos.h"

/**
 * binary_search - searches for val in sorted array of ints
 * @array: array
 * @size: m elements
 * @value: val to search for
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right = size - 1, mid, i;

	if (!array || !size)
		return (-1);
	while (1)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (right + left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (left == right)
			return (-1);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
		if (left > right)
			return (-1);
	}
}
