#include "lists.h"

/**
 * pop_listint - deletes the head node of the list.
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *head;
	listint_t *curent;

	if (*head == NULL)
		return (0);

	curent = *head;

	hnode = curent->n;

	h = curent->next;

	free(curent);

	*head = h;

	return (hnode);
}
