#include "lists.h"

/**
* add_nodeint - adds new node at start of linked list
* @head: pointer to first node
* @n: data of first node
* Return: pointer to new node, or NULL if fails
*/
listint_t *add_nodeint(listint_t **head, const int     n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
	return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
