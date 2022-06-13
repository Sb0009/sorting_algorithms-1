#include "sort.h"

/**
 *gap_sort - sort array with gaps
 *@array: array to be sorted
 *@size: size of array
 *@gap: gap size
 */
void gap_sort(int *array, size_t size, unsigned int gap)
{
	size_t j, i;

	for (j = gap; j < size; j++)
	{
		i = j;
		while (i >= gap && array[i] < array[i - gap])
		{
			swap(array + i, array + i - gap);
			i -= gap;
		}
	}
}

/**
 *shell_sort - shell sorting
 *@array: array to be sorted
 *@size: size of array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1;

	while (gap < size / 3)
	{
		gap = gap * 3 + 1;
	}
	while (gap >= 1)
	{
		gap_sort(array, size, gap);
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}

/**
 *swap - Functionh that swaps two values
 *@a: First value
 *@b: Second value
 *Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
