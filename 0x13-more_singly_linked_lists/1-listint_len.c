#include "lists.h"

/**
* listint_len - returns linked list elemnts number
* @h: pointer to first node
* Return: nodes number
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}
	return (num);
}
