#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodess = 0;

	for (; h; nodess++, h = h->next)
		printf("%d\n", h->n);

	return (nodess);
}
