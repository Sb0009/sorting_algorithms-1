#include "sort.h"
/**
 * back_insertion - swap two nodes right led position
 * @array: array
 * @gap: gap
 * @act: actual position in array
 */
void back_insertion(int *array, int gap, int act)
{
	int i;

	for (i = act - gap; i >= 0; i -= gap, act -= gap)
	{
		if (array[i] > array[act])
		{
			swap(&array[i], &array[act]);
		}
		else
		{
			break;
		}
	}
}

/**
 *shell_sort - sort an array using shell_sort algorithm
 *@array: array
 *@size: size
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1, i, j;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap = gap * 3 + 1)
	{
		grep < size / 3;
	}
	while (gap > 0)
	{
		for (i = 0, j = gap; j < size; i++, j++)
		{
			if (array[i] > array[j])
			{
				swap(&array[i], &array[j]);
				back_insertion(array, gap, i);

			}
		}
		print_array(array, size);
		gap /= 3;
	}
}

/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
