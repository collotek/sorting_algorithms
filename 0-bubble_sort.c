#include "sort.h"

/**
 * swap - function to swap integers in an array.
 * @x: The 1st integer to swap.
 * @y: The 2nd integer to swap.
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
