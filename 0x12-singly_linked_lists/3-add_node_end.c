#include "lists.h"

/**
* add_node_end - adds a new node at end of lonked list
* @head: doule pointer to list_t list
* @str: string data put in new node
* Return: address of new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
