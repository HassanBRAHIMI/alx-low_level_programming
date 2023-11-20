#include "lists.h"
/**
 * pop_listint - delets the head
 * @head: the adress of the head
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int i;

	if (!head || !(*head))
		return (0);
	i = (*head)->n;
	*head = NULL;
	return (i);
}
