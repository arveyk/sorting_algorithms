#include <stdlib.h>

/**
 * bubble_sort - function to implement bubble sort algorithm
 * @array: Array to be sorted
 * @size: size of the array to be sorted
 *
 * Return: No value
 */

void print_array(int *array, size_t size);

void bubble_sort(int *array, size_t size)
{

	size_t y, i = 0;
	int tmp = 0;

	for (y = 0; y < size; y++)
	{
		while (i < y)
		{
		
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
}
