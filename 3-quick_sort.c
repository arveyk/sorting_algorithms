#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array(const int *array, size_t size);
/**
 * quick_sort - sorts an array of integers using quick sort algorithms
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: no value
 */
void quick_sort(int *array, size_t size)
{

	size_t c, g = 0;
	int temp;

	while (g < size)
	{

		if (array[0] > array[1])
		{
			temp = array[0];
			array[0] = array[1];
			array[1] = temp;
			print_array(array, size);
		}
		if (array[g] > array[g + 1])
		{
			c = g;
			temp = array[g];
			array[g] = array[g + 1];
			array[g + 1] = temp;
			g = 0;
			print_array(array, size);
		}
		while (c < g)
		{
			if (array[c] > array[c + 1])
			{
			temp = array[c];
			array[c] = array[c + 1];
			array[c + 1] = temp;
			print_array(array, size);
			c++;
			}
			c++;
		}

		g++;
	}
}
