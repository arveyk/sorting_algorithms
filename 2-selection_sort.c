#include "sort.h"
#include <stdio.h>
#include <stddef.h>

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
	size_t s = 0;
	size_t r;

	while(q < size)
	{
	
		if (array[p] > array[q])
		{
			swap(&(array[p]), &(array[q]));
			print_array(array, size);
			s = q + 1;
			while (s < size)
			{
				if (array[p] > array[s])
				{
					swap(&(array[p]), &(array[s])); 
					print_array(array, size);
				}
				s++;
			}
		}
		else
		{
			r = q + 1;
			while (r < size)
			{
				if (array[p] > array[r])
				{
					swap(&(array[p]), &(array[r]));
					print_array(array, size);
					s = r + 1;
					while (s < size)
					{
						if (array[p] > array[s])
						{
							swap(&(array[p]), &(array[s]));
							print_array(array, size);
						}
						s++;
					}
				}
				r++;
			}
		p++;
		q++;
		}
	}
}
