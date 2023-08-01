#include "lists.h"

/**
* pop_listint - deletes head node od linked list
* @head: pointer to first node
* Return: data inside elemnts was deleted, or 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
