#include "sort.h"

/**
 * swap_ints - swap two ints
 * @a: first int
 * @b: second int
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts in ascending order with selection
 * @array: arr of ints
 * @size: size of the array
 *
 * Description: descrip
 */
void selection_sort(int *array, size_t size)
{
	int *small;
	size_t i, j;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		small = array + i;
		for (j = i + 1; j < size; j++)
			if (array[j] < *small)
				small = array + j;

		if ((array + i) != small)
		{
			swap_ints(array + i, small);
			print_array(array, size);
		}
	}
}
