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

	listint_t *trav = *(list);
	listint_t *trav_0;
	listint_t *temp = NULL;
	/*
	listint_t *temp0 = NULL;
	 * listint_t *temp1 = NULL;
	listint_t *p = NULL;
	listint_t *p2 = NULL;
	*/

	trav_0 = trav->next;
	while (trav->next != NULL)
	{
		if (trav->n > trav_0->n)
		{
			temp = trav;
/*			temp0 = trav->prev;
 */

			if (temp->prev)
				temp->prev->next = trav_0;
			temp->prev = trav_0;
			temp->next = trav_0->next;

			trav_0->prev = temp->prev;
			if (trav_0->next)
				trav_0->next->prev = trav;
			trav_0->next = trav;
			print_list(*list);
			
		/*	p = temp0;
		       	p2 = trav_0;
			
			for (; p->prev != NULL && p2; p = p->prev, p2 = p2->prev)
			{
				if (p->n > p2->n)
				{
					temp1 = p->prev;
					if (p->prev)
						p->prev->next = p2;
					p->prev = p2;
					p->next = p2->next;

					p2->next->prev = p;
					p2->prev = temp1;
					if (p2->next)
						p2->next = p;
					print_list(*list);
				}
			}
			trav_0 = trav->next;

		*/
		}
		trav = trav->next;
		if (trav->next)
			trav_0 = trav->next;
	}
}
