#include "sort.h"

/**
 * bitonic_sort - sorts an array of integers using Bitonic sort algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 *
 * Return: No return value
 */
void bitonic_sort(int *array, size_t size)
{

	size_t m;
	size_t inr;
	size_t qst;
	size_t l;
	int tmp;

	for (m = 0; m < size; m *= 2)
	{

		for (inr = m / 2; inr > 0; inr /= 2)
		{
		
			for (qst = 0; qst < size; qst++)
			{
				l = qst ^ inr ;
			if (l > qst)
				if((((inr & m) == 0) && array[qst] > array[l]) || (((inr & m) != 0) && array[qst] > array[l]))
				{

					tmp = array[qst];
					array[qst] = array[l];
					array[l] = tmp;
				}
			}
		}
	}
}
