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
	listint_t *kda;

	if (!head || !(*head))
		return (0);
	kda = *head;
	i = kda->n;
	*head = kda->next;
	free(kda);
	return (i);
}
