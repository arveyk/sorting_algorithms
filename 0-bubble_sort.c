#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts an array in ascending order using Bubble sort algorithm
 * @array: pointer to array to sort
 * @size: size of the array
 *
 * Return: No return value
 */
void bubble_sort(int *array, size_t size)
{

	size_t limiter = 0;
	size_t m;
	int temp;
	char flip = 'a';


	while (array && limiter < size)
	{

		for (m = 0; m < size; m++)
			if (array[m] > array[m + 1])
		{

			temp = array[m];
			array[m] = array[m + 1];
			array[m + 1]  = temp;
			print_array(array, size);
			flip = 'b';
		}
		limiter++;
		if (flip == 'a')
			break;
	}
}
