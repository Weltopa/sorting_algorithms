#include "sort.h"
/**
 * bubble_sort - Sorts an array of ints in ascending order.
 * @array: Array to sort.
 * @size: Size of array.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
