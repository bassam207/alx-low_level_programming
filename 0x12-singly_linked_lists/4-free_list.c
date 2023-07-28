#include "lists.h"

/**
* free_list - frees linked list
* @head: pointer to first node
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}