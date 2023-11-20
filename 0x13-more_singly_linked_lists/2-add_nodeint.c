#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning
 * @head: the adress of the head
 * @n: the int n
 *
 * Retutn: the adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if(!temp)
		return(NULL);
	temp->n = (int)n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
