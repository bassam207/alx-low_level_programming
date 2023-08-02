#include "lists.h"

/**
* print_listint - prints all elemnts of linked list
* @h: pointer to first node of linked list
* Return: nodes number
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
	i++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (i);
}
