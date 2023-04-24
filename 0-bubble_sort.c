#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 *
 * @array: Pointer to an array of integers
 * @size: Number of elements in the array
 *
 * Description: This function sorts an array of integers in ascending order
 *              by repeatedly swapping adjacent elements that are in the wrong
 *              order until the entire array is sorted.
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, k;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
