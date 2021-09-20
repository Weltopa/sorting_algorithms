#include "sort.h"
/**
 * selection_sort - Selection sort of fixed size array.
 * @array: Array of data.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, n;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[n])
				n = j;
		if (n != i)
		{
			temp = array[i];
			array[i] = array[n];
			array[n] = temp;
			print_array(array, size);
		}
	}
}
