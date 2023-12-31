#include "sort.h"

/**
 * selection_sort - Arranges a set of integers in ascending sequence by employing the Selection sort technique
 * @size: array's size.
 * @array: array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
