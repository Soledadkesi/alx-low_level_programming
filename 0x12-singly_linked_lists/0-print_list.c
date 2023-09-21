#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t snodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		snodes++;
	}
	return (snodes);
}
