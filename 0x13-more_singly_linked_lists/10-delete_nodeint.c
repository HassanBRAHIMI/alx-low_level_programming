#include "lists.h"
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: the adress of head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *temp, *kda, *rep;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			rep = *head;
			*head = (*head)->next;
			free(rep);
		}
	}
	else
	{
		i = 0;
		temp = *head;
		while (temp && i < index - 1)
		{
			temp = temp->next;
			i++;
		}
		if (!temp || !temp->next)
			return (-1);
		kda = temp->next;
		temp->next = kda->next;
		free(kda);
	}
	return (1);
}
