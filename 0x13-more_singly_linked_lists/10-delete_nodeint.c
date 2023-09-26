#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: head of a list.
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *new;

	old = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && old != NULL; i++)
		{
			old = old->next;
		}
	}

	if (old == NULL || (old->new == NULL && index != 0))
	{
		return (-1);
	}

	new = old->new;

	if (index != 0)
	{
		old->new = new->new;
		free(new);
	}
	else
	{
		free(old);
		*head = new;
	}

	return (1);
}
