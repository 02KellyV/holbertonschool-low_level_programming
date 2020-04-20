#include "search_algos.h"

/**
 * jump_search - searches val in sorted array of ints
 * @array: array
 * @size: n elements
 * @value: value
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int sqroot, i, j;

	if (!array || !size || array[0] > value)
		return (-1);
	sqroot = sqrt(size);
	for (i = 0; i < size; i += sqroot)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i - sqroot, i);
	for (j = i - sqroot; j <= i; j++)
	{
		if (j >= size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
