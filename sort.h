#ifndef SORT
#define SORT

void print_list(const listint_s *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);



/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored inthe node.
 * @prev: Pointer to the prev element of the list.
 * @next: Pointer to thr next elem of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

#endif
