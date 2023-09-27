#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_list(const listint_t *list);

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in
 * ascending order
 * @list: pointer to first node of the list
 *
 * Return: No value
 */

void cocktail_sort_list(listint_t **list)
{

	listint_t *trav0 = *(list);
	listint_t *trav1 = NULL;
	listint_t *prev_node;
	listint_t *nxt = NULL;
	listint_t *p = NULL;
	listint_t *p2 = NULL;
	listint_t *prev_node2 = NULL;
	listint_t *nxt2 = NULL;

	if (*list == NULL)
		return;
	trav1 = trav0->next;
	while (trav0 != NULL && trav1)
	{
		if (trav0->n > trav1->n)
		{
			prev_node = trav0->prev;
			if (trav1)
				nxt = trav1->next;
			if (prev_node != NULL)
				prev_node->next = trav1;
			if (nxt != NULL)
				nxt->prev = trav0;
			trav0->prev = trav1;
			trav0->next = nxt;

			trav1->prev = prev_node;
			trav1->next = trav0;

			print_list(*list);

			if (trav1 != NULL)
			{
			p2 = trav1;
			p = trav1->prev;
			for (; p != NULL && p2 != NULL;)
			{
				if (p->n > p2->n)
				{
					nxt2 = p2->next;
					if (p != NULL)
						prev_node2 = p->prev;

					if (prev_node2)
						prev_node2->next = p2;

					nxt2->prev = p;

					p->prev = p2;
					p->next = nxt2;

					p2->prev = prev_node2;
					p2->next = p;

					print_list(*list);

					p = p2->prev;

				}
				else
				{
				p2 = p;
				p = p->prev;
				}
			}
			}
			trav1 = nxt;
		}
		else
		{
		trav0 = trav1;
		if (trav0 != NULL)
			trav1 = trav0->next;
		}
	}
}
