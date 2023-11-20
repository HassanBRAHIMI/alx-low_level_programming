#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: the adress of the head
 * @n: the int n
 *
 * Return: the adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *tail;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	if (!(*head))
	{
		*head = temp;
	}
	else
	{
	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
	}
	temp->n = (int)n;
	temp->next = NULL;
	tail->next = temp;
	}
	return (temp);
}
