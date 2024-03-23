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
