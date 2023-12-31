#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head
 * @index: index
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	i = 0;
	while (temp && i < index)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		i++;
	}
	return (temp);
}
