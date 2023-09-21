#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - increases a new node at the end of a linked list
* @head: head of the linked list.
* @str: string to store in the list.
*
* Return: address of the head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *arg;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	arg = malloc(sizeof(list_t));
	if (!arg)
		return (NULL);

	arg->str = strdup(str);
	arg->len = len;
	arg->next = NULL;
	if (*head == NULL)
	{
		*head = arg;
		return (arg);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = arg;
	return (arg);
}
