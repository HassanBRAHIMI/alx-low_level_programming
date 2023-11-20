#include "lists.h"
/**
 * listint_len - list len
 * @h: head
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	size_t i;

	temp = (listint_t *)h;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
