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
	int em;

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				em = array[j];
				array[j] = array[j+1];
				aray[j+1] = em;
				printf("Swapping %d and %d: ", array[j], array[j+1]);
				for (size_t k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}
}
