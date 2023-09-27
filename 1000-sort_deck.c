#include <stdlib.h>
#include "deck.h"

int comp_fun(const void *a, const void *b)
{

	return (*(int*)a - *(int*)b);
}
/**
 * sort_deck - sorts a deck of cards
 * @deck: sorts a deck of cards
 *
 * Return: No return value
 */
void sort_deck(deck_node_t **deck)
{

	size_t cards;

	if (*deck == NULL)
		return;
	for (cards = 0; cards < 52; cards++)
	{
		qsort(*deck, 52, sizeof(*deck[cards]), comp_fun);
	}
}
