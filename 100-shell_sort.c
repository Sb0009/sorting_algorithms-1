#include "sort.h"

/**
 *gap_sort - sort array with gaps
 *@array: array to be sorted
 *@size: size of array
 *@n: gap size
 */
void gap_sort(int *array, size_t size, unsigned int n)
{
	size_t j, i;

	for (j = n; j < size; j++)
	{
		i = j;
		while (i >= n && array[i] < array[i - n])
		{
			swap(array + i, array + i - n);
			i -= n;
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
	unsigned int n = 1;

	while (n < size / 3)
	{
		n = n * 3 + 1;
	}
	while (n >= 1)
	{
		gap_sort(array, size, n);
		n = (n - 1) / 3;
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
