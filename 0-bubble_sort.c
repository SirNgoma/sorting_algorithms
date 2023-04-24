#include <stdio.h>

/**
 * bubble_sort - sort arrays of inegers
 *
 * @array:array to be sorted
 * @size: size of the arr
 * Returns: nothing.
 */

void bubble_sort(int *array, size_t size)
{
	int swp  = 1;

	while (swp)
	{
		swp = 0;
		for (size_t i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swp = 1;
				printf(array[i], array[i + 1]);
			}
		}
		size--;
	}
}
