#include "sort.h"

/**
 * swap - Swaps two adjacent nodes in a doubly-linked list
 * @a: Address of the first node
 * @b: Address of the second node
 *
 * This function swaps two adjacent nodes in a doubly-linked list.
 * It updates the pointers of the nodes and their neighbors accordingly.
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - Sorts a doubly-linked list using insertion sort algorithm
 * @list: Address of pointer to head node
 *
 * This function sorts a doubly-linked list using insertion sort algorithm.
 * It iterates through the list, swapping adjacent nodes as necessary.
 * It prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
