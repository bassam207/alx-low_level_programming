#include "lists.h"

/**
* add_node - add new node to linked list
* @head: pointer to next node
* @str: data value of node
* Return: pointer ro first node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	first_node = malloc(sizeof(list_t));
	if (!first_node)
		return (NULL);

	first_node->str = strdup(str);
	first_node->len = len;
	first_node->next = (*head);
	(*head) = first_node;

	return (*head);
}
