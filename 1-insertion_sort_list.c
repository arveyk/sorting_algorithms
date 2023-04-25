#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_list(const listint_t *list);
/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order
 * @list: pointer to first node of the list
 *
 * Return: No value
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *temp = *(list);

	while (temp->next != NULL)
	{
	
		if (temp->n > temp->next->n)
		{ 
			temp->prev->next = temp->next->next;
		
			temp->next->prev = temp->prev;
			temp->prev = temp->next;
			
			temp->next = temp->next->next;
			temp->next->next = temp;
			print_list(*list);
			
		}

		temp = temp->next;

	}
	
}
