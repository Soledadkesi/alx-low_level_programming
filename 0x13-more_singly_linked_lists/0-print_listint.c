#include "lists.h"

/**
 * print_listint - print all the components of a list.
 * @h: linked list of type listint_t to print.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnumber = 0;

	while (h)
	{
		printf("%d\n", h->nnumber);
		nnumber++;
		h = h->next;
	}
	return (nnumber);
}
