#include "sort.h"
/**
 * bubble_sort - Function to bubble sort an array and print each iteration
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    int i, j, temp, n = size;

    if (array == NULL)
    {
        return;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
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
