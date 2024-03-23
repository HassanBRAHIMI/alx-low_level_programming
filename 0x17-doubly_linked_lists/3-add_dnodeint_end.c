#include "lists.h"

/**
 * add_dnodeint_end - add nodeint
 * @head: head
 * @n: n
 *
 * Return: the address of the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	temp = *head;
	if (!(*head))
		*head = new_node;
	else
	{
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	}
	return (new_node);
}
