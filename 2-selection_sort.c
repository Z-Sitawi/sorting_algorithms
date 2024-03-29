#include "sort.h"
/**
 * selection_sort - sorts array in ascendingly using Selection sort algorithm
 * @array: A Pointer to the array to be printed
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, c, less, tmp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (less = i, c = i; c < size; c++)
			if (array[c] < array[less])
			{
				less = c;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[less];
			array[less] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
