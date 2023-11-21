#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: the adress of head
 * @idx: the index
 * @n: the int
 *
 * Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	if (!head || !(*head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		i = 0;
		while (temp && i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		if (!temp)
			return (NULL);
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
