#include "lists.h"

/**
 * reverse_listint - reverses a linked list. * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	temp = NULL;
	current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = current;
	}

	*head = temp;
	return (*head);
}
