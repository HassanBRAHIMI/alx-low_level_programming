#include "lists.h"
#include <stdio.h>
/**
* print_list - prints the elements of a list
* @h: the head of the list
*
* Return: the length of the list
*/
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *temp;

	i = 0;
	temp = (list_t *)h;
	while (temp != NULL)
	{
		printf("%s\n", temp -> str);
		i++;
		temp = temp -> next;
	}
	return (i);
}
