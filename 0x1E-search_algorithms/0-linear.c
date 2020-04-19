#include "search_algos.h"

/**
* linear_search - searches value in array of ints
* @array: array
* @size: n elements
* @value: value to search for
* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
