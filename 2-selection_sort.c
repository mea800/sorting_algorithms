#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Description: Sorts the array by repeatedly finding the minimum element
 * from the unsorted part and putting it at the beginning.
 */
void selection_sort(int *array, size_t size)
{
	size_t u, h, m;
	int temp;

	if (!array || !size)
		return;

	for (u = 0; u < size - 1; u++)
	{
		for (h = size - 1, m = u + 1; h > u; h--)
		{
			if (array[h] < array[m])
			{
				m = h;
			}
		}
		if (array[u] > array[m])
		{
			temp = array[u];
			array[u] = array[m];
			array[m] = temp;
			print_array(array, size);
		}
	}
}
