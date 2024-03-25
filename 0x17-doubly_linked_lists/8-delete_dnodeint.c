#include "lists.h"
/**
 * dlistint_len - counts the len of a list
 * @h: the head
 *
 * Return: the length of it
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t n;
	dlistint_t *temp;

	temp = (dlistint_t *)h;
	n = 0;
	while (temp)
	{
	temp = temp->next;
	n++;
	}
	return (n);
}

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: the head of the list
 * @index: the index of the node deleted
 *
 * Return: 1 on succes -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *previous_node;
	dlistint_t *next_node;
	unsigned int i;

	if (index > dlistint_len(*head) - 1)
		return (-1);
	temp = *head;
	i = 0;
	while(temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	previous_node = temp->prev;
	next_node = temp->next;
	if (!previous_node)
		*head = next_node;
	else
		previous_node->next = next_node;
	if (!next_node && !previous_node)
	{
		free(temp);
		return(1);
	}
	next_node->prev = previous_node;
	free(temp);
	return (1);
}
