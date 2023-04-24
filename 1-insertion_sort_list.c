#include <math.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list -  sorts doubly linked list sof integers
 * @list: list ti be srorted
 * Return: nothong
 */

void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}
	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *temp = current;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			listint_t *prev = temp->prev;
			listint_t *next = temp->next;

			if (prev->prev != NULL)
			{
				prev->prev->next = temp;
			}
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;
			prev->next = next;
			if (next != NULL)
			{
				next->prev = prev;
			}
			printf("Sw %d and %d\n", prev->n, temp->n);
			if (temp->prev == NULL)
			{
				*list = temp;
			}
		}
		current = current->next;
	}
}
