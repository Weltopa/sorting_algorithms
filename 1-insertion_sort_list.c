#include "sort.h"
/**
 * insertion_sort_list - Sorts list of ints with insertion sort.
 * @list: The list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *forward;

	if (!list || !(*list) || !(*list)->next)
		return;
	forward = (*list)->next;

	while (forward)
	{
		while ((forward->prev != NULL) && (forward->prev->n > forward->n))
		{
			forward->prev->next = forward->next;
			if (forward->next)
				forward->next->prev = forward->prev;
			forward->next = forward->prev;
			forward->prev = forward->prev->prev;
			forward->next->prev = forward;

			if (forward->prev == NULL)
				*list = forward;
			else
				forward->prev->next = forward;

			print_list(*list);
		}
		forward = forward->next;
	}
}
