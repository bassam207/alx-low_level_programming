#include "lists.h"

/**
* add_nodeint_end - adds node at end of linkd list
* @head: pointer to first node
* @n: data of new node
* Return: pointer to new node, or NULL if fails
*/
listint_t *add_nodeint_end(listint_t **head, const     int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = new;

	return (new);
}