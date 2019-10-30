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
 * insertion_sort - insertion sort method
 * @listint_t: The list to be printed
 * @size: Number of elements in @array
 */
void insertion_sort_list(listint_t **list)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
