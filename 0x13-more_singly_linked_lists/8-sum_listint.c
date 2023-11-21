#include "lists.h"
/**
 * sum_listint - sum of all n
 * @head: head
 *
 * Return: the sum of all n
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i;

	temp = head;
	i = 0;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
