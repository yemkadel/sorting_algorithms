#include "sort.h"

/**
 * swap_ints - swaps ints
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
 * bubble_sort - sorts int in ascending order.
 * @array: array of unsorted int
 * @size: size
 *
 * Description: descrp.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, arrlen = size;
	bool swap = false;

	if (array == NULL || size < 2)
		return;

	while (swap == false)
	{
		swap = true;
		for (i = 0; i < arrlen - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = false;
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
			}
		}
		arrlen--;
	}
}
