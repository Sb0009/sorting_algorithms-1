#include "sort.h"
/**
 * smallest - fucntion to get the smallest index of array
 * @array: the array to be sorted
 * @n: size of the array
 * @k: pivot
 * Return: void
 */
int smallest(int array[], int k, int n)
{
	int pos = k;
	int small = array[k];
	int i;

	for (i = k + 1; i < n; i++)
	{
		if (array[i] < small)
		{
			small = array[i];
			pos = i;
		}
	}
	return (pos);
}
/**
 *selection_sort - function to sort an array using selection sort method
 *@array: the array to be sorted
 *@size: size of the array
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	int k;
	int pos;
	int temp;
	int n = size;

	for (k = 0; k < n; k++)
	{
		pos = smallest(array, k, n);
		temp = array[k];
		array[k] = array[pos];
		array[pos] = temp;
		print_array(array, size);
	}
}
