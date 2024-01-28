#include "sort.h"

/**
 * bubble_sort - function to sort
 * @array: array to sort
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	int changed = 1;
	size_t i;

	if (!array || !size)
		return;

	while (changed)
	{
		changed = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				changed = 1;
				print_array(array, size);
			}
		}
	}
}
