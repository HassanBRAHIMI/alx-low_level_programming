#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t i;

	temp = (listint_t *)h;
	i = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
