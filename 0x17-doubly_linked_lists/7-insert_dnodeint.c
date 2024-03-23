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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *holder;
	dlistint_t *new_node;
	
	new_node = malloc(sizeof(dlistint_t *));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	temp = *h;
	i = 0;
	if (idx > dlistint_len(*h) - 1)
		return (NULL);
	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}
	while(temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	holder = temp;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = holder->next;
	(holder->next)->prev = new_node;
	return (new_node);
}
