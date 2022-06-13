#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *a, int *b);
int smallest(int array[], int k, int n);
void selection_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void print_sort(int array[], size_t size, int init);
size_t partition(int array[], size_t size);
void quick_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void gap_sort(int *array, size_t size, unsigned int gap);
void print_sort(int array[], size_t size, int init);

#endif
