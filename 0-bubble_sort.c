#include "sort.h"
/**
 * bubble_sort - Function to bubble sort an array and print each iteration
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 0, temp, constant = 1;

	if (array == NULL)
	{
		return;
	}
	for (i = size - 1; constant ; i--)
	{
		constant = 0;
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				constant = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
