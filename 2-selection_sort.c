#include "sort.h"
#include <stdio.h>
#include <stddef.h>

/**
 * swap - interchanges the position of two numbers
 * @a: pointer to first number
 * @b: pointer to second number
 *
 * Return: No return value
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integers using selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: Number of elements in the array
 *
 * Return: No return Value
 */
void selection_sort(int *array, size_t size)
{
	size_t p = 0;
	size_t q = 1;
	size_t psn_a;
	size_t psn_save;
	int smallest;

	while (q < size)
	{
		smallest = array[p];
		for (psn_a = q; psn_a < size; psn_a++)
		{
			if (array[p] > array[psn_a])
			{
				if (smallest > array[psn_a])
				{
					smallest = array[psn_a];
					psn_save = psn_a;
				}
			}
		}
		if (array[p] > array[psn_save])
		{
			swap(&(array[p]), &(array[psn_save]));
			print_array(array, size);
		}
		p++;
		q++;
	}
}

