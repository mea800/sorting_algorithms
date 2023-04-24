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
	int tempr;
	size_t u, j;

	if (!array || !size)
		return;

	u = 0;
	while (u < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tempr = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempr;
				print_array(array, size);
			}
		}
		u++;
	}
}
