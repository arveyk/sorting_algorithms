#include <stdio.h>
#include "sort.h""

/**
 * swap - swaps the values of two items
 * @a: first item
 * @b: second item
 *
 * Return: None
 */
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
