#include "sort.h"
/**
 * quick_sort - Arranges a collection of integers in ascending sequence through the Quick sort tech
 * @array: array
 * @size: array's size
 */
void quick_sort_helper(int *array, int low, int high, size_t size);
/**
 * Quick sorts the array if size >= 2
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}
/**
 * quick_sort_helper: Quick sort helper funct
 * @array: array
 * @low: Lower bound of partition.
 * @high: Upper bound of partition.
 * @size:array's size
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	if (low < high)
	{
		pivot = array[high];
		i = low - 1;

		for (j = low; j <= high - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				if (i != j)
					print_array(array, size);
			}
		}
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		if (i + 1 != high)
			print_array(array, size);

		quick_sort_helper(array, low, i, size);
		quick_sort_helper(array, i + 2, high, size);
	}
}
