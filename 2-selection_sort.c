#include "sort.h"
/**
 * selection_sort - sorts array in ascendingly using Selection sort algorithm
 * @array: A Pointer to the array to be printed
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int min;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				idx = j;
			}
		}
		if (idx != i)
		{
			array[idx] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
