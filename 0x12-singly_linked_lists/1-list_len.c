#include "lists.h"

/**
* list_len - return the number of elemnts in list
* @h: pointer to first node in list
*
* Return: len of list
*/
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
