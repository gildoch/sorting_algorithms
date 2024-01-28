#include "sort.h"

/**
 * selection_sort - sorting algoritm
 * @array: arrary to be sorted
 * @size: size of the array to be sorted
 * Return: None
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int tmp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[minIndex] > array[j])
			{
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			tmp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = tmp;
			print_array(array, size);
		}
	}
}
