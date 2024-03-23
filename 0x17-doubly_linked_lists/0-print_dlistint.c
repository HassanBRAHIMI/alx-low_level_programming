#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: the head of the linked list
 * 
 * Return: the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t n;
    dlistint_t *temp;

    temp = h;
    n = 0;
    while(temp)
    {
        printf("%d", temp->n);
        temp = temp->next;
        n++;
    }
    return (n);
}