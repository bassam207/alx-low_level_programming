#include "lists.h"

/**
* add_node - add new node to linked list
* @head: pointer to next node
* @str: data value of node
* Return: pointer ro first node
*/
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	list_t *first_node;

	first_node = (list_t *)malloc(sizeof(list_t));
	}
	if (first_node == NULL)
		return (*head);
	{
		first_node->str =strdup(str);
		first_node->next = (*head);
		(*head) = first_node;
	}
	return (*head);
}
